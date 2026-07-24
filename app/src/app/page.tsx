"use client";

import { SelectChangeEvent } from "@mui/material/Select";
import BookOnline from "@mui/icons-material/BookOnline";
import Box from "@mui/material/Box";
import Typography from "@mui/material/Typography";
import Cards from "../components/Card";
import Header from "../components/Header";
import { Locale } from "../components/LanguageSelect";
import LanguageSelectDock from "../components/LanguageSelectDock";
import usePersistedLocale from "../hooks/usePersistedLocale";
import enMessages from "../translate/en.json";
import ptMessages from "../translate/pt.json";

const BASE_PATH = "/Nilo";
const messages = {
  pt: ptMessages,
  en: enMessages,
};

export default function Home() {
  const { locale, handleLocaleChange } = usePersistedLocale();

  return <HomeContent locale={locale} onLocaleChange={handleLocaleChange} />;
}

interface HomeContentProps {
  locale: Locale;
  onLocaleChange: (event: SelectChangeEvent<Locale>) => void;
}

function HomeContent({ locale, onLocaleChange }: HomeContentProps) {
  const t = (key: keyof typeof ptMessages.homePage) =>
    messages[locale].homePage[key];

  return (
    <>
      <Header type="home" />
      <LanguageSelectDock locale={locale} onChange={onLocaleChange} color="#F2ECCA" />
      <Box
        sx={{
          backgroundColor: "#042B3A",
          inset: 0,
          position: "fixed",
          zIndex: -1,
        }}
      />

      <Box
        sx={{
          display: "flex",
          flexDirection: "column",
          height: "100vh",
          overflow: "hidden",
        }}
      >
        <Box sx={{ height: { xs: 40, md: 200 }, position: "relative" }}>
          <Box
            sx={{
              display: { xs: "none", md: "block" },
              position: "absolute",
              right: 0,
              top: 0,
            }}
          >
            <Box
              alt="detail"
              component="img"
              src={`${BASE_PATH}/whaleDetail.svg`}
              sx={{ width: "450px" }}
            />
          </Box>
        </Box>
        <Box
          sx={{
            alignItems: { xs: "center", md: "flex-start" },
            display: "flex",
            flex: 1,
            justifyContent: "center",
            maxWidth: { xs: "100%", md: "1200px" },
            overflowX: "hidden",
            position: "relative",
            width: "100%",
          }}
        >
          <Box
            sx={{
              alignItems: { xs: "center", md: "flex-start" },
              display: "flex",
              flexDirection: { xs: "column", md: "row" },
              justifyContent: { xs: "center", md: "space-between" },
              maxWidth: "1200px",
              paddingBottom: { xs: "64px", md: 0 },
              width: "100%",
            }}
          >
            <Box
              sx={{
                maxWidth: "700px",
                px: 4,
                textAlign: { xs: "center", md: "left" },
              }}
            >
              <Typography
                sx={{
                  color: "#fff",
                  fontFamily: "Roboto, sans-serif",
                  fontSize: { xs: "1rem", md: "1.2rem" },
                  lineHeight: 1.8,
                }}
              >
                {t("description")}
              </Typography>
            </Box>

            <Box
              sx={{
                alignItems: { xs: "center", md: "flex-start" },
                display: "flex",
                flexDirection: "column",
                gap: 3,
                width: { xs: "100%", md: "auto" },
              }}
            >
              <Cards
                description={t("card-nilo-subtitle")}
                icon={
                  <Box
                    alt="logo"
                    component="img"
                    src={`${BASE_PATH}/nilo.svg`}
                    sx={{ width: 40 }}
                  />
                }
                label={t("card-nilo-title")}
                link="/Versions"
              />

              <Cards
                description={t("card-nilo-github-subtitle")}
                icon={
                  <Box
                    alt="logo"
                    component="img"
                    src={`${BASE_PATH}/nilo-script.svg`}
                    sx={{ width: 40 }}
                  />
                }
                label={t("card-nilo-github-title")}
                link="https://github.com/namariaa/Nilo"
              />

              <Cards
                description={t("card-nilo-classroom-subtitle")}
                icon={<BookOnline htmlColor="#042B3A" />}
                label={t("card-nilo-classroom")}
                link="https://classroom.google.com/c/ODYwMTgxNDY0NTE5?cjc=ck22xenn"
              />
            </Box>
          </Box>
        </Box>
        <Box
          sx={{
            bottom: 0,
            display: { xs: "none", md: "block" },
            left: 0,
            pointerEvents: "none",
            position: "fixed",
            zIndex: 0,
          }}
        >
          <Box
            alt="whale"
            component="img"
            src={`${BASE_PATH}/logo-white.svg`}
            sx={{
              height: "auto",
              maxWidth: "900px",
              width: "100%",
            }}
          />
        </Box>
      </Box>
    </>
  );
}
