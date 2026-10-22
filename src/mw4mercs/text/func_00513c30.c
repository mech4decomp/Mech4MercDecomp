/*
 * FUN_00513C30 (91 B) — String processing function
 * Calls a function pointer, null-terminates, and processes characters
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int *DAT_0076B320;   /* IAT: strncpy */
extern int *DAT_0076B0D0;   /* IAT: IsDBCSLeadByte */

__declspec(naked) void __stdcall func_00513c30(void)
{
    __asm {
        mov  eax, [esp+8]
        push ebx
        push esi
        mov  esi, [esp+0xC]
        push edi
        mov  edi, [esp+0x18]
        push edi
        push eax
        push esi
        call dword ptr [DAT_0076B320]
        add  esp, 0xC
        test esi, esi
        mov  ebx, eax
        jz   epilogue
        mov  byte ptr [esi+edi-1], 0
        cmp  byte ptr [esi], 0
        jz   epilogue
        mov  edi, dword ptr [DAT_0076B0D0]
char_loop:
        xor  ecx, ecx
        mov  cl, [esi]
        push ecx
        call edi
        test eax, eax
        jz   skip_advance
        mov  al, [esi+1]
        test al, al
        jz   null_string
        inc  esi
skip_advance:
        mov  al, [esi+1]
        inc  esi
        test al, al
        jnz  char_loop
        pop  edi
        pop  esi
        mov  eax, ebx
        pop  ebx
        ret
null_string:
        mov  byte ptr [esi], 0
epilogue:
        pop  edi
        pop  esi
        mov  eax, ebx
        pop  ebx
        ret
    }
}
