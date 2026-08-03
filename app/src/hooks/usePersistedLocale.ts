"use client";

import { SelectChangeEvent } from "@mui/material/Select";
import { useEffect, useState } from "react";
import { Locale } from "../components/LanguageSelect";

const LOCALE_STORAGE_KEY = "nilo-locale";
const DEFAULT_LOCALE: Locale = "pt";
const supportedLocales = new Set<Locale>(["pt", "en"]);

function isSupportedLocale(value: string | null): value is Locale {
  return value !== null && supportedLocales.has(value as Locale);
}

function readStoredLocale(): Locale {
  if (typeof window === "undefined") {
    return DEFAULT_LOCALE;
  }

  const storedLocale = window.localStorage.getItem(LOCALE_STORAGE_KEY);

  return isSupportedLocale(storedLocale) ? storedLocale : DEFAULT_LOCALE;
}

export default function usePersistedLocale(): {
  locale: Locale;
  handleLocaleChange: (event: SelectChangeEvent<Locale>) => void;
} {
  const [locale, setLocale] = useState<Locale>(DEFAULT_LOCALE);
  const [hasLoadedStoredLocale, setHasLoadedStoredLocale] = useState(false);

  useEffect(() => {
    setLocale(readStoredLocale());
    setHasLoadedStoredLocale(true);
  }, []);

  useEffect(() => {
    if (!hasLoadedStoredLocale) {
      return;
    }

    window.localStorage.setItem(LOCALE_STORAGE_KEY, locale);
  }, [hasLoadedStoredLocale, locale]);

  function handleLocaleChange(event: SelectChangeEvent<Locale>) {
    const nextLocale = event.target.value;

    if (!isSupportedLocale(nextLocale)) {
      return;
    }

    setLocale(nextLocale);
    window.localStorage.setItem(LOCALE_STORAGE_KEY, nextLocale);
  }

  return { locale, handleLocaleChange };
}
