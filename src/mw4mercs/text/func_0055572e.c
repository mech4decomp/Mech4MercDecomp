/*
 * Residual/gap function at 0x0055572E (311 B). Ghidra missed this entry.
 * Structure:
 *   - 2-byte alignment pad (mov edi,edi)
 *   - 6 dword jump-table entries
 *   - 8 NOPs
 *   - fn 1 (162 B): __thiscall, checks flags at [ecx+0x384]/[ecx+0x589]/
 *     [ecx+0x5ac], walks a list, calls FUN_00626950
 *   - 14 NOPs + a lone `ret 4` + 13 NOPs
 *   - fn 2 (85 B): __thiscall, similar flag checks, calls
 *     FUN_0061acf0/FUN_0061ad20/FUN_0054c4d0
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_00626950(void);
extern void __cdecl FUN_0061acf0(void);
extern void __cdecl FUN_0061ad20(void);
extern void __cdecl FUN_0054c4d0(void);

extern int g_007dab44;
extern int g_007dab40;

__declspec(naked) void func_0055572e(void)
{
    __asm {
        /* 2-byte alignment pad: mov edi,edi */
        mov     edi, edi
        /* jump-table dword entry 0x00555680 */
        __emit 0x80
        __emit 0x56
        __emit 0x55
        __emit 0x00
        /* jump-table dword entry 0x00555691 */
        __emit 0x91
        __emit 0x56
        __emit 0x55
        __emit 0x00
        /* jump-table dword entry 0x005556A2 */
        __emit 0xA2
        __emit 0x56
        __emit 0x55
        __emit 0x00
        /* jump-table dword entry 0x005556B3 */
        __emit 0xB3
        __emit 0x56
        __emit 0x55
        __emit 0x00
        /* jump-table dword entry 0x005556C4 */
        __emit 0xC4
        __emit 0x56
        __emit 0x55
        __emit 0x00
        /* jump-table dword entry 0x005556D5 */
        __emit 0xD5
        __emit 0x56
        __emit 0x55
        __emit 0x00
        /* 8 NOP alignment bytes */
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop

        /* ---- fn 1 ---- */
        mov     eax, dword ptr [ecx + 0x384]
        mov     edx, dword ptr [eax + 0x10]
        shr     edx, 0x13
        test    dl, 1
        push    esi
        jnz     f1_exit
        mov     al, byte ptr [ecx + 0x589]
        test    al, al
        jnz     f1_exit
        mov     al, byte ptr [ecx + 0x5ac]
        test    al, al
        jnz     f1_exit
        mov     eax, dword ptr [ecx + 0x938]
        test    eax, eax
        jz      f1_exit
        mov     edx, dword ptr [esp + 8]
        mov     esi, dword ptr [edx + 0x10]
        test    esi, esi
        jle     f1_exit
        mov     edx, dword ptr [eax + 8]
        test    edx, edx
        jz      f1_a
        mov     edx, dword ptr [edx + 4]
        mov     dword ptr [eax + 8], edx
f1_a:
        mov     edx, dword ptr [eax + 8]
        test    edx, edx
        jz      f1_c
        cmp     dword ptr [edx], 0
        jnz     f1_b
f1_c:
        mov     edx, dword ptr [eax + 4]
        mov     edx, dword ptr [edx]
        mov     dword ptr [eax + 8], edx
f1_b:
        mov     edx, dword ptr [g_007dab44]
        mov     edx, dword ptr [edx]
        xor     edx, dword ptr [g_007dab40]
        mov     esi, dword ptr [edx + 0x40]
        add     edx, 0x40
        xor     esi, 0x85739531
        jz      f1_exit
        mov     eax, dword ptr [eax + 8]
        test    eax, eax
        jz      f1_zero
        mov     eax, dword ptr [eax]
        jmp     f1_push
f1_zero:
        xor     eax, eax
f1_push:
        push    eax
        mov     eax, dword ptr [ecx + 0x8dc]
        mov     ecx, dword ptr [edx]
        push    eax
        xor     ecx, 0x85739531
        call    FUN_00626950
f1_exit:
        pop     esi
        ret     4

        /* 14 NOP alignment bytes */
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        /* lone ret 4 */
        ret     4
        /* 13 NOP alignment bytes */
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop

        /* ---- fn 2 ---- */
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x384]
        mov     ecx, dword ptr [eax + 0x10]
        shr     ecx, 0x13
        test    cl, 1
        jnz     f2_exit
        mov     al, byte ptr [esi + 0x589]
        test    al, al
        jnz     f2_exit
        mov     al, byte ptr [esi + 0x5ac]
        test    al, al
        jnz     f2_exit
        push    0x8000
        call    FUN_0061acf0
        mov     ecx, eax
        call    FUN_0061ad20
        test    al, al
        jz      f2_exit
        mov     edx, dword ptr [esp + 8]
        mov     eax, dword ptr [edx + 0x10]
        test    eax, eax
        jle     f2_exit
        push    8
        mov     ecx, esi
        call    FUN_0054c4d0
f2_exit:
        pop     esi
        ret     4
    }
}
