"use client";

import Box from "@mui/material/Box";
import FormControl from "@mui/material/FormControl";
import MenuItem from "@mui/material/MenuItem";
import Select, { SelectChangeEvent } from "@mui/material/Select";

export type Locale = "pt" | "en";

const languageOptions = {
  pt: {
    flag: "🇧🇷",
    label: "Português",
  },
  en: {
    flag: "🇺🇸",
    label: "English",
  },
};

interface LanguageSelectProps {
  locale: Locale;
  color: string;
  onChange: (event: SelectChangeEvent<Locale>) => void;
}

export default function LanguageSelect({
  locale,
  color,
  onChange,
}: LanguageSelectProps): React.ReactNode {
  return (
    <FormControl size="small">
      <Select
        aria-label="Selecionar idioma"
        displayEmpty
        MenuProps={{
          slotProps: {
            paper: {
              sx: {
                borderRadius: "12px",
                boxShadow: "0 12px 32px rgba(0, 0, 0, 0.22)",
                mt: 1,
                zIndex: 2600,
              },
            },
          },
          sx: {
            zIndex: 2600,
          },
        }}
        onChange={onChange}
        renderValue={(selected) => {
          const option = languageOptions[selected as Locale];

          return (
            <Box
              component="span"
              sx={{ alignItems: "center", display: "flex", gap: 1 }}
            >
              <Box component="span" sx={{ fontSize: "1rem", lineHeight: 1 }}>
                {option.flag}
              </Box>
              {option.label}
            </Box>
          );
        }}
        sx={{
          border: `1px solid ${color}`,
          borderRadius: "999px",
          color: `${color}`,
          fontFamily: "Roboto, sans-serif",
          fontSize: { xs: "0.78rem", md: "0.88rem" },
          fontWeight: 700,
          minWidth: { xs: 132, md: 156 },
          textTransform: "uppercase",
          "& .MuiSelect-select": {
            alignItems: "center",
            display: "flex",
            gap: 1,
            py: { xs: 0.75, md: 0.9 },
            pl: { xs: 2, md: 2.25 },
            pr: { xs: 4, md: 4.25 },
          },
          "& .MuiOutlinedInput-notchedOutline": {
            border: 0,
          },
          "&:hover .MuiOutlinedInput-notchedOutline, &.Mui-focused .MuiOutlinedInput-notchedOutline":
            {
              border: 0,
            },
          "& .MuiSvgIcon-root": {
            color: `${color}`,
          },
        }}
        value={locale}
      >
        <MenuItem value="pt">
          <Box component="span" sx={{ mr: 1 }}>
            {languageOptions.pt.flag}
          </Box>
          {languageOptions.pt.label}
        </MenuItem>
        <MenuItem value="en">
          <Box component="span" sx={{ mr: 1 }}>
            {languageOptions.en.flag}
          </Box>
          {languageOptions.en.label}
        </MenuItem>
      </Select>
    </FormControl>
  );
}
