"use client";

import Image from "next/image";
import niloWhite from "../../../public/nilo-white.svg";
import nilo from "../../../public/nilo.svg";
import Link from "@mui/material/Link";
import Box from "@mui/material/Box";
import Typography from "@mui/material/Typography";

interface HeaderProps {
  type: "home" | "default";
}

export default function Header(props: HeaderProps): React.ReactNode {
  const {type} = props;

  const styleFont = {
    fontFamily: "Roboto, sans-serif",
    fontWeight: 700,
    fontSize: { xs: "0.8rem", md: "1.4rem" },
    color: type === "home" ? "#fff" : "#042B3A",
    "&::after": {
      content: '""',
      position: "absolute",
      width: "0%",
      height: "2px",
      bottom: -4,
      left: 0,
      backgroundColor: type === "home" ? "#fff" : "#042B3A",
      transition: "width 0.3s ease",
    },
    "&:hover": {
      transform: "translateY(-2px)",
      opacity: 0.9,
    },

    "&:hover::after": {
      width: "100%",
    },
  }
  
  return (
    <Box
      component="header"
      sx={{
        position: "fixed",
        top: 0,
        left: 0,
        width: "100vw",
        height: {xs: "50px", md:"110px"},
        backgroundColor: type !== "home" ? "#F2ECCA" : "#042B3A",
        display: "flex",
        alignItems: "center",
        justifyContent: "space-between",
        px: 4,
        zIndex: 2000,
      }}
    >
      <Box sx={{ display: "flex", alignItems: {xs: "center", md: "flex-start"}, paddingTop: "48px", width: {xs: "60px", md:"200px"}, height: {xs:"auto", md:"160px"}, position:"relative" }}>
        <Link href="/Nilo" underline="none">
        <Image src={type === "home" ? niloWhite : nilo} alt="logo" fill/>
        </Link>
      </Box>

      <Box
        sx={{
          position: "absolute",
          left: "50%",
          transform: "translateX(-50%)",
          display: "flex",
          alignItems: {xs: "flex-start" ,md:"center"},
          gap: { xs: 2, md: 3 },
          paddingTop: {xs: "16px", md:"64px"}
        }}
      >
        <Link href="/Nilo" underline="none">
          <Typography
            sx={styleFont}
          >
            PÁGINA INICIAL
          </Typography>
        </Link>

        <Link href="Nilo/nilo" underline="none">
          <Typography
            sx={styleFont}
          >
            NILO
          </Typography>
        </Link>
      </Box>
    </Box>
  );
}