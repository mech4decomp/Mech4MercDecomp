/*
 * FUN_00694000 (133 B) — __cdecl RET (no args). Compares two 16-bit
 * fields of an object against globals (0x7db0ac/0x7db0ae); if they
 * differ, builds a key and calls FUN_004D1F80/FUN_00411C40/FUN_004D21C0;
 * then calls FUN_00411C40 twice with two string pointers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned short g_007db0ac;
extern unsigned short g_007db0ae;

extern void __cdecl FUN_00509490(void);
extern void __cdecl FUN_0040ED60(void);
extern void __cdecl FUN_004D1F80(void);
extern void __cdecl FUN_00411C40(void);
extern void __cdecl FUN_004D21C0(void);

__declspec(naked) void FUN_00694000(void)
{
    __asm {
        sub     esp, 0x44
        push    esi
        mov     esi, dword ptr [esp + 0x50]
        push    edi
        mov     edi, dword ptr [esp + 0x50]
        push    esi
        push    edi
        call    FUN_00509490
        add     esp, 8
        push    0x7723e8
        mov     ecx, esi
        call    FUN_0040ED60
        mov     cx, word ptr [edi + 0x118]
        cmp     cx, word ptr [g_007db0ac]
        mov     esi, eax
        lea     eax, [edi + 0x118]
        jne     L694048
        mov     dx, word ptr [eax + 2]
        cmp     dx, word ptr [g_007db0ae]
        je      L69406e
    L694048:
        push    1
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_004D1F80
        mov     eax, dword ptr [esp + 0x30]
        push    eax
        push    0x799448
        mov     ecx, esi
        call    FUN_00411C40
        lea     ecx, [esp + 8]
        call    FUN_004D21C0
    L69406e:
        push    0x771780
        push    0x7717a4
        mov     ecx, esi
        call    FUN_00411C40
        pop     edi
        pop     esi
        add     esp, 0x44
        ret
    }
}
