"use client";

import BreadCrumb from "@/src/components/BreadCrumb";
import Header from "@/src/components/Header";
import { Locale } from "@/src/components/LanguageSelect";
import LanguageSelectDock from "@/src/components/LanguageSelectDock";
import DownloadIcon from "@mui/icons-material/Download";
import OpenInNewIcon from "@mui/icons-material/OpenInNew";
import Box from "@mui/material/Box";
import Button from "@mui/material/Button";
import Divider from "@mui/material/Divider";
import FormControl from "@mui/material/FormControl";
import InputLabel from "@mui/material/InputLabel";
import Link from "@mui/material/Link";
import MenuItem from "@mui/material/MenuItem";
import Paper from "@mui/material/Paper";
import Select, { SelectChangeEvent } from "@mui/material/Select";
import Stack from "@mui/material/Stack";
import Typography from "@mui/material/Typography";
import { NextIntlClientProvider, useTranslations } from "next-intl";
import NextLink from "next/link";
import { useMemo, useState } from "react";
import usePersistedLocale from "@/src/hooks/usePersistedLocale";
import enMessages from "../../translate/en.json";
import ptMessages from "../../translate/pt.json";

type VersionId = "v1_1" | "v1_2" | "v1_3" | "v1_4";
const BASE_PATH = "/Nilo";

const messages = {
  pt: ptMessages,
  en: enMessages,
};

const riskLinksByChangeKey: Partial<Record<string, string>> = {
  "version-1-change-1": "01",
  "version-1-change-2": "03",
  "version-1-change-3": "07",
  "version-1-change-4": "08",
  "version-1-change-5": "13",
  "version-2-change-1": "14",
  "version-2-change-2": "16",
  "version-2-change-3": "17",
  "version-2-change-4": "19",
  "version-2-change-5": "22",
  "version-3-change-1": "24",
  "version-3-change-2": "25",
  "version-3-change-3": "27",
  "version-3-change-4": "28",
  "version-3-change-5": "32",
  "version-4-change-1": "33",
  "version-4-change-2": "34",
  "version-4-change-3": "35",
  "version-4-change-4": "36",
  "version-4-change-5": "38",
};

const processVersions: Array<{
  id: VersionId;
  labelKey: string;
  fileName: string;
  pdfPath: string;
  changelogKeys: string[];
}> = [
  {
    id: "v1_1",
    labelKey: "version-1",
    fileName: "Processo NILO - Versão 1.pdf",
    pdfPath: "processo.pdf",
    changelogKeys: [
      "version-1-change-1",
      "version-1-change-2",
      "version-1-change-3",
      "version-1-change-4",
      "version-1-change-5",
    ],
  },
  {
    id: "v1_2",
    labelKey: "version-2",
    fileName: "Processo NILO - Versão 2.pdf",
    pdfPath: "processo-v2.pdf",
    changelogKeys: [
      "version-2-change-1",
      "version-2-change-2",
      "version-2-change-3",
      "version-2-change-4",
      "version-2-change-5",
    ],
  },
  {
    id: "v1_3",
    labelKey: "version-3",
    fileName: "Processo NILO - Versão 3.pdf",
    pdfPath: "processo-v3.pdf",
    changelogKeys: [
      "version-3-change-1",
      "version-3-change-2",
      "version-3-change-3",
      "version-3-change-4",
      "version-3-change-5",
    ],
  },
  {
    id: "v1_4",
    labelKey: "version-4",
    fileName: "Processo NILO - Versão 4.pdf",
    pdfPath: "processo-v4.pdf",
    changelogKeys: [
      "version-4-change-1",
      "version-4-change-2",
      "version-4-change-3",
      "version-4-change-4",
      "version-4-change-5",
    ],
  },
];

export default function NiloVersions(): React.ReactNode {
  const { locale, handleLocaleChange } = usePersistedLocale();

  return (
    <NextIntlClientProvider
      key={locale}
      locale={locale}
      messages={messages[locale]}
    >
      <VersionsContent locale={locale} onLocaleChange={handleLocaleChange} />
    </NextIntlClientProvider>
  );
}

interface VersionsContentProps {
  locale: Locale;
  onLocaleChange: (event: SelectChangeEvent<Locale>) => void;
}

function VersionsContent({
  locale,
  onLocaleChange,
}: VersionsContentProps): React.ReactNode {
  const t = useTranslations("versionsPage");
  const [selectedVersionId, setSelectedVersionId] = useState<VersionId>("v1_4");
  const selectedVersion = useMemo(
    () =>
      processVersions.find((version) => version.id === selectedVersionId) ??
      processVersions[0],
    [selectedVersionId],
  );
  const selectedPdfHref = `${BASE_PATH}/${selectedVersion.pdfPath}`;

  function handleVersionChange(event: SelectChangeEvent<VersionId>) {
    setSelectedVersionId(event.target.value as VersionId);
  }

  function renderChangelogItem(changeKey: string) {
    const riskCode = riskLinksByChangeKey[changeKey];
    const textContent = t(changeKey);

    if (!riskCode) {
      return textContent;
    }

    return (
      <Link
        component={NextLink}
        href={{ pathname: "/Risks", query: { risk: riskCode } }}
        sx={{
          color: "#06455D",
          cursor: "pointer",
          font: "inherit",
          fontWeight: 500,
          textDecoration: "underline",
          textDecorationColor: "rgba(6, 69, 93, 0.42)",
          "&:hover": {
            color: "#042B3A",
            textDecorationColor: "#042B3A",
          },
        }}
        rel="noopener noreferrer"
        target="_blank"
      >
        {textContent}
      </Link>
    );
  }

  return (
    <>
    <Box
      sx={{
        position: "fixed",
        top: 0,
        left: 0,
        right: 0,
        zIndex: 2000,
        backgroundColor: "#F2ECCA",
      }}
    >
      <Header type="default" fixed={false} logoFixed />
      <Box
        sx={{
          display: "flex",
          justifyContent: "space-between",
          alignItems: "center",
          px: { xs: 2, md: 4 },
          py: 1,
        }}
      >
      <BreadCrumb
        childrens={[
          { link: "/", label: t("breadcrumb-home") },
          { label: t("breadcrumb-current") },
        ]}
      />

      <Stack
        direction={{ xs: "column", md: "row" }}
        spacing={2}
      >
          <LanguageSelectDock
            locale={locale}
            color="#042B3A"
            onChange={onLocaleChange}
          />

          <FormControl
            size="small"
            sx={{ minWidth: 188 }}
          >
            <InputLabel id="process-version-label">
              {t("version-select-label")}
            </InputLabel>

            <Select
              labelId="process-version-label"
              value={selectedVersionId}
              label={t("version-select-label")}
              onChange={handleVersionChange}
              MenuProps={{
                slotProps: {
                  paper: {
                    sx: { zIndex: 3200 },
                  },
                },
                sx: { zIndex: 3200 },
              }}
              sx={{
                borderRadius: "999px",
                color: "#042B3A",
                fontWeight: 700,
                "& .MuiOutlinedInput-notchedOutline": {
                  borderColor: "#042B3A",
                },
              }}
            >
              {processVersions.map((version) => (
                <MenuItem key={version.id} value={version.id}>
                  {t(version.labelKey)}
                </MenuItem>
              ))}
            </Select>
          </FormControl>
        </Stack>
      </Box>
    </Box>
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
          color: "#042B3A",
          fontFamily: "Roboto, sans-serif",
          position: "relative",
          top: 50,
          mt: { xs: "72px", md: "128px" },
          px: { xs: 2, md: 4 },
          pb: 6,
        }}
      >
        
        <Box sx={{ mb: 3}}>
          <Stack
            direction={{ xs: "column", sm: "row" }}
            spacing={1.5}
            sx={{
              alignItems: { xs: "stretch", sm: "center" },
              justifyContent: "space-between",
              width: "100%",
            }}
          >
            <Typography
              component="h1"
              sx={{
                flex: 1,
                fontSize: { xs: "1.35rem", md: "2rem" },
                fontWeight: 700,
                lineHeight: 1.25,
              }}
            >
              {t("title")}
            </Typography>
            <Button
              component={NextLink}
              href="/Risks"
              startIcon={<OpenInNewIcon />}
              sx={{
                alignSelf: { xs: "stretch", sm: "center" },
                backgroundColor: "#042B3A",
                borderRadius: "999px",
                color: "#fff",
                fontWeight: 700,
                px: 2.5,
                whiteSpace: "nowrap",
                "&:hover": {
                  backgroundColor: "#06455D",
                },
              }}
              variant="contained"
            >
              {t("risks-button")}
            </Button>
          </Stack>
          <Typography
            sx={{
              fontSize: { xs: "0.95rem", md: "1.05rem" },
              fontWeight: 300,
              lineHeight: 1.7,
              maxWidth: "760px",
              mt: 1.5,
            }}
          >
            {t("description")}
          </Typography>
        </Box>

        <Divider sx={{ borderColor: "rgba(4, 43, 58, 0.22)", mb: 3 }} />

        <Stack direction={{ xs: "column", lg: "row" }} spacing={3}>
          <Paper
            elevation={0}
            sx={{
              backgroundColor: "rgba(255, 255, 255, 0.72)",
              border: "1px solid rgba(4, 43, 58, 0.16)",
              borderRadius: "8px",
              flex: 1,
              overflow: "hidden",
            }}
          >
            <Stack
              direction={{ xs: "column", sm: "row" }}
              spacing={2}
              sx={{
                alignItems: { xs: "stretch", sm: "center" },
                justifyContent: "space-between",
                p: 2,
              }}
            >
              <Box>
                <Typography sx={{ fontSize: "0.8rem", fontWeight: 700 }}>
                  {t("preview-label")}
                </Typography>
                <Typography sx={{ fontSize: "1.05rem", fontWeight: 700 }}>
                  {t(selectedVersion.labelKey)}
                </Typography>
              </Box>
              <Button
                component="a"
                download={selectedVersion.fileName}
                href={selectedPdfHref}
                startIcon={<DownloadIcon />}
                sx={{
                  alignSelf: { xs: "stretch", sm: "center" },
                  backgroundColor: "#042B3A",
                  borderRadius: "999px",
                  color: "#fff",
                  fontWeight: 700,
                  px: 2.5,
                  "&:hover": {
                    backgroundColor: "#06455D",
                  },
                }}
                variant="contained"
              >
                {t("download-button")}
              </Button>
            </Stack>
            <Box
              component="iframe"
              src={`${selectedPdfHref}#toolbar=0`}
              title={`${t("preview-label")} ${t(selectedVersion.labelKey)}`}
              sx={{
                border: 0,
                display: "block",
                height: { xs: "62vh", md: "720px" },
                width: "100%",
              }}
            />
          </Paper>

          <Paper
            elevation={0}
            sx={{
              backgroundColor: "rgba(255, 255, 255, 0.72)",
              border: "1px solid rgba(4, 43, 58, 0.16)",
              borderRadius: "8px",
              flexBasis: { lg: "360px" },
              p: 2.5,
            }}
          >
            <Typography
              component="h2"
              sx={{
                fontSize: { xs: "1.1rem", md: "1.35rem" },
                fontWeight: 700,
              }}
            >
              {t("changelog-title")}
            </Typography>
            <Typography
              sx={{
                color: "rgba(4, 43, 58, 0.72)",
                fontSize: "0.92rem",
                fontWeight: 300,
                lineHeight: 1.6,
                mt: 0.75,
              }}
            >
              {t("changelog-subtitle")}
            </Typography>
            <Stack spacing={1.5} sx={{ mt: 2 }}>
              {selectedVersion.changelogKeys.map((changeKey) => (
                <Box
                  key={changeKey}
                  sx={{
                    backgroundColor: "rgba(242, 236, 202, 0.66)",
                    border: "1px solid rgba(4, 43, 58, 0.12)",
                    borderRadius: "8px",
                    p: 1.75,
                  }}
                >
                  <Typography
                    sx={{
                      fontSize: "0.95rem",
                      fontWeight: 500,
                      lineHeight: 1.55,
                    }}
                  >
                    {renderChangelogItem(changeKey)}
                  </Typography>
                </Box>
              ))}
            </Stack>
          </Paper>
        </Stack>
      </Box>
    </>
  );
}
