"use client";

import Image from "next/image";
import NextLink from "next/link";
import niloWhite from "../../../public/nilo-white.svg";
import nilo from "../../../public/nilo.svg";
import Link from "@mui/material/Link";
import Box from "@mui/material/Box";

interface HeaderProps {
  type: "home" | "default";
  fixed?: boolean;
  logoFixed?: boolean;
}

export default function Header(props: HeaderProps): React.ReactNode {
  const { fixed = true, logoFixed = false, type } = props;
  
  return (
    <Box
      component="header"
      className="header"
      sx={{
        position: fixed ? "fixed" : "relative",
        top: 0,
        left: 0,
        boxSizing: "border-box",
        width: "100%",
        height: {xs: "50px", md:"110px"},
        backgroundColor: fixed
          ? type !== "home"
            ? "#F2ECCA"
            : "#042b3a1c"
          : "transparent",
        display: "flex",
        alignItems: "center",
        justifyContent: "space-between",
        px: 4,
        pointerEvents: logoFixed ? "none" : "auto",
        zIndex: fixed ? 2000 : 2200,
      }}
    >
      <Box
        sx={{
          alignItems: { xs: "center", md: "flex-start" },
          display: "flex",
          height: logoFixed
            ? { xs: "48px", md: "110px" }
            : { xs: "48px", md: "160px" },
          paddingTop: 0,
          position: logoFixed ? "fixed" : "relative",
          top: logoFixed ? 0 : undefined,
          left: logoFixed ? { xs: 32, md: 32 } : undefined,
          zIndex: logoFixed ? 2300 : undefined,
          width: { xs: "60px", md: "200px" },
          pointerEvents: "auto",
        }}
      >
        <Link
          component={NextLink}
          href="/"
          underline="none"
          sx={{
            display: "block",
            height: "100%",
            position: "relative",
            width: "100%",
          }}
        >
          <Image src={type === "home" ? niloWhite : nilo} alt="logo" fill />
        </Link>
      </Box>

      {/* <Box
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
        <Link component={NextLink} href="/" underline="none">
          <Typography
            sx={styleFont}
          >
            PÁGINA INICIAL
          </Typography>
        </Link>

        {type === "home" ? (
        <Link component={NextLink} href="/nilo" underline="none">
          <Typography
            sx={styleFont}
          >
            NILO
          </Typography>
        </Link>
        ) : (
          <Link href="" underline="none">
          <Typography
            sx={styleFont}
          >
            NILO
          </Typography>
        </Link>
        )}
      </Box> */}
    </Box>
  );
}
