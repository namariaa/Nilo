"use client";

import Box from "@mui/material/Box";
import { SelectChangeEvent } from "@mui/material/Select";
import LanguageSelect, { Locale } from "../LanguageSelect";

interface LanguageSelectDockProps {
  locale: Locale;
  onChange: (event: SelectChangeEvent<Locale>) => void;
  color: string;
}

export default function LanguageSelectDock({
  locale,
  color,
  onChange,
}: LanguageSelectDockProps): React.ReactNode {
  const isCentered = color === "#F2ECCA";

  return (
    <Box
      sx={{
        display: "flex",
        alignItems: "center",

        ...(isCentered && {
          position: "fixed",
          left: "50%",
          top: "5%" ,
          transform: "translateX(-50%)",
          zIndex:5000 
        }),
      }}
    >
      <LanguageSelect locale={locale} onChange={onChange} color={color} />
    </Box>
  );
}
