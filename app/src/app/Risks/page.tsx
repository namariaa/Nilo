"use client";

import BreadCrumb from "@/src/components/BreadCrumb";
import Header from "@/src/components/Header";
import { Locale } from "@/src/components/LanguageSelect";
import LanguageSelectDock from "@/src/components/LanguageSelectDock";
import Box from "@mui/material/Box";
import Divider from "@mui/material/Divider";
import Paper from "@mui/material/Paper";
import { SelectChangeEvent } from "@mui/material/Select";
import Table from "@mui/material/Table";
import TableBody from "@mui/material/TableBody";
import TableCell from "@mui/material/TableCell";
import TableContainer from "@mui/material/TableContainer";
import TableHead from "@mui/material/TableHead";
import TableRow from "@mui/material/TableRow";
import Typography from "@mui/material/Typography";
import { NextIntlClientProvider, useTranslations } from "next-intl";
import { useEffect, useState } from "react";
import usePersistedLocale from "@/src/hooks/usePersistedLocale";
import { riskRecurrenceRows } from "../_data/riskRecurrenceRows";
import enMessages from "../../translate/en.json";
import ptMessages from "../../translate/pt.json";

const messages = {
  pt: ptMessages,
  en: enMessages,
};

export default function RisksPage(): React.ReactNode {
  const { locale, handleLocaleChange } = usePersistedLocale();

  return (
    <NextIntlClientProvider
      key={locale}
      locale={locale}
      messages={messages[locale]}
    >
      <RisksContent locale={locale} onLocaleChange={handleLocaleChange} />
    </NextIntlClientProvider>
  );
}

interface RisksContentProps {
  locale: Locale;
  onLocaleChange: (event: SelectChangeEvent<Locale>) => void;
}

function RisksContent({
  locale,
  onLocaleChange,
}: RisksContentProps): React.ReactNode {
  const t = useTranslations("risksPage");
  const [highlightedRiskCode, setHighlightedRiskCode] = useState<string | null>(
    null,
  );

  useEffect(() => {
    const riskCode = new URLSearchParams(window.location.search).get("risk");
    const matchedRow = riskRecurrenceRows.find((row) => row.code === riskCode);

    if (!matchedRow) {
      return;
    }

    const animationFrameId = window.requestAnimationFrame(() => {
      setHighlightedRiskCode(matchedRow.code);
      document.getElementById(matchedRow.id)?.scrollIntoView({
        behavior: "smooth",
        block: "center",
      });
    });

    return () => window.cancelAnimationFrame(animationFrameId);
  }, []);

  return (
    <>
      <Header type="default" fixed={false} />
      <Box
        sx={{
          position: "fixed",
          inset: 0,
          backgroundColor: "#F2ECCA",
          zIndex: -1,
        }}
      />
      <Box
        sx={{
            display:"flex",
            justifyContent:"space-between",
            pr:4,
            pl:4
        }}
      >
       <BreadCrumb
            childrens={[
              { link: "/", label: t("breadcrumb-home") },
              { link: "/Versions", label: t("breadcrumb-versions") },
              { label: t("breadcrumb-current") },
            ]}
          />
      <LanguageSelectDock locale={locale} onChange={onLocaleChange} color="#042B3A" />
      </Box>

      <Box
        sx={{
          color: "#042B3A",
          fontFamily: "Roboto, sans-serif",
          mt: { xs: "96px", md: "48px" },
          px: { xs: 2, md: 4 },
          pb: 6,
        }}
      >
        <Box sx={{ maxWidth: "960px", mb: 3 }}>
          <Typography
            component="h1"
            sx={{
              fontSize: { xs: "1.35rem", md: "2rem" },
              fontWeight: 700,
              lineHeight: 1.25,
            }}
          >
            {t("title")}
          </Typography>
          <Typography
            sx={{
              fontSize: { xs: "0.95rem", md: "1.05rem" },
              fontWeight: 300,
              lineHeight: 1.7,
              mt: 1.5,
            }}
          >
            {t("description")}
          </Typography>
        </Box>

        <Divider sx={{ borderColor: "rgba(4, 43, 58, 0.22)", mb: 3 }} />

        <Paper
          elevation={0}
          sx={{
            backgroundColor: "rgba(255, 255, 255, 0.72)",
            border: "1px solid rgba(4, 43, 58, 0.16)",
            borderRadius: "8px",
            overflow: "hidden",
          }}
        >
          <TableContainer>
            <Table stickyHeader size="small">
              <TableHead>
                <TableRow>
                  {[
                    t("risk-table-problem"),
                    t("risk-table-solution"),
                    t("risk-table-page"),
                    t("risk-table-type"),
                  ].map((column) => (
                    <TableCell
                      key={column}
                      sx={{
                        backgroundColor: "#042B3A",
                        color: "#fff",
                        fontSize: "0.78rem",
                        fontWeight: 700,
                        minWidth: column === t("risk-table-page") ? 88 : 190,
                        verticalAlign: "top",
                      }}
                    >
                      {column}
                    </TableCell>
                  ))}
                </TableRow>
              </TableHead>
              <TableBody>
                {riskRecurrenceRows.map((row) => {
                  const isHighlighted = highlightedRiskCode === row.code;
                  const highlightedCellSx = isHighlighted
                    ? { backgroundColor: "rgba(226, 176, 63, 0.28)" }
                    : {};

                  return (
                    <TableRow
                      hover
                      id={row.id}
                      key={row.id}
                      sx={{
                        scrollMarginTop: { xs: "132px", md: "104px" },
                      }}
                    >
                      <TableCell
                        sx={{
                          ...highlightedCellSx,
                          fontWeight: 700,
                          verticalAlign: "top",
                        }}
                      >
                        {t(`risk-rows.${row.code}.problem`)}
                      </TableCell>
                      <TableCell sx={{ ...highlightedCellSx, verticalAlign: "top" }}>
                        {t(`risk-rows.${row.code}.solution`)}
                      </TableCell>
                      <TableCell
                        sx={{
                          ...highlightedCellSx,
                          fontWeight: 700,
                          verticalAlign: "top",
                        }}
                      >
                        {row.page}
                      </TableCell>
                      <TableCell sx={{ ...highlightedCellSx, verticalAlign: "top" }}>
                        {t(`risk-rows.${row.code}.type`)}
                      </TableCell>
                    </TableRow>
                  );
                })}
              </TableBody>
            </Table>
          </TableContainer>
        </Paper>
      </Box>
    </>
  );
}
