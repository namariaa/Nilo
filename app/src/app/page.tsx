"use client";

import Box from "@mui/material/Box";
import Image from "next/image";
import whaleDetail from "../../public/whaleDetail.svg";
import logo from "../../public/nilo.svg";
import Cards from "../components/Card";
import Typography from "@mui/material/Typography";
import BookOnline from "@mui/icons-material/BookOnline";
import whaleLogo from "../../public/logo-white.svg";
import logoScript from "../../public/nilo-script.svg";
import Header from "../components/Header";

export default function Home() {
  return (
    <>
      <Header type="home" /> 
      <Box
        sx={{
          position: "fixed",
          inset: 0,
          backgroundColor: "#042B3A",
          zIndex: -1,
        }}
      />

      <Box
        sx={{
          height: "100vh",
          overflow: "hidden",
          display: "flex",
          flexDirection: "column",
        }}
      >
        <Box sx={{ position: "relative", height: { xs: 40, md: 200 } }}>          
          <Box
            sx={{
              position: "absolute",
              top: 0,
              right: 0,
              display: { xs: "none", md: "block" },
            }}
          >
            <Image src={whaleDetail} alt="detail" style={{ width: "450px" }} />
          </Box>
        </Box>
        <Box
          sx={{
            flex: 1,
            display: "flex",
            justifyContent: "center",
            alignItems: { xs: "center", md: "flex-start" }, 
            position: "relative",
            width: "100%",
            maxWidth: { xs: "100%", md: "1200px" },
            overflowX: "hidden",
          }}
        >
          <Box
            sx={{
              display: "flex",
              flexDirection: { xs: "column", md: "row" }, 
              alignItems: { xs: "center", md: "flex-start" },
              justifyContent: {xs: "center" ,md:"space-between"},
              width: "100%",
              maxWidth: "1200px",
              paddingBottom:{xs:"64px", md:"0"},
            }}
          >
            <Box sx={{ maxWidth: "700px", textAlign: { xs: "center", md: "left" } , px: 4,}}>
              <Typography
                sx={{
                  fontFamily: "Roboto, sans-serif",
                  fontSize: { xs: "1rem", md: "1.2rem" },
                  lineHeight: 1.8,
                  color: "#fff",
                }}
              >
                O NILO é um processo estruturado para o desenvolvimento de linguagens
                de programação, criado para apoiar estudantes de Análise e
                Desenvolvimento de Sistemas (TADS). De forma iterativa, o projeto
                permite documentar, implementar e validar linguagens voltadas à
                resolução de problemas em diferentes domínios.
              </Typography>
            </Box>

            <Box
              sx={{
                display: "flex",
                flexDirection: "column",
                gap: 3,
                width: { xs: "100%", md: "auto" },
                alignItems: { xs: "center", md: "flex-start" }
              }}
            >
              <Cards
                description="Explore todas as etapas do processo NILO."
                icon={<Image src={logo} alt="logo" width={40} />}
                label="Processo NILO"
              />

              <Cards
                description="Acesse o repositório da NiloScript."
                icon={<Image src={logoScript} alt="logo" width={40} />}
                label="GitHub NiloScript"
                link="https://github.com/namariaa/Nilo"
              />

              <Cards
                description="Acesse o ambiente do sala de aula para visualizar todas as aulas e materias."
                icon={<BookOnline htmlColor="#042B3A" />}
                label="Google Classroom"
                link="https://classroom.google.com/c/ODYwMTgxNDY0NTE5?cjc=ck22xenn"
              />
            </Box>
          </Box>
        </Box>
        <Box
          sx={{
            display: { xs: "none", md: "block" },
            position: "fixed", 
            bottom: 0,
            left: 0,
            pointerEvents: "none",
            zIndex: 0,
          }}
        >
          <Image
            src={whaleLogo}
            alt="whale"
            style={{
              width: "100%",
              maxWidth: "900px",
              height: "auto",
            }}
          />
        </Box>
      </Box>
    </>
  );
}