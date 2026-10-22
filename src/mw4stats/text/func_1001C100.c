/*
 * FUN_1001c100 (181 B) - __thiscall (6 args, RET 0x18). HttpOpenRequestW
 * wrapper: if *this != 0, stamp a filetime at this+0x10 and wait via
 * FUN_1001c040; else open without a context and store the handle.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_10021094;   /* IAT: GetSystemTime */
extern void *g_10021090;   /* IAT: SystemTimeToFileTime */
extern void *g_10021184;   /* IAT: HttpOpenRequestW */
extern void __cdecl FUN_1001c040(void);

__declspec(naked) void __cdecl FUN_1001c100(void)
{
    __asm {
        sub     esp, 0x14
        push    esi
        mov     esi, ecx
        cmp     dword ptr [esi], 0x0
        jz      L_c17d
        lea     eax, [esp + 0x8]
        push    edi
        push    eax
        call    dword ptr [g_10021094]
        lea     ecx, [esi + 0x10]
        lea     edx, [esp + 0xc]
        push    ecx
        push    edx
        call    dword ptr [g_10021090]
        mov     eax, dword ptr [esi + 0x20]
        mov     edx, dword ptr [esp + 0x34]
        lea     ecx, [esi + 0x30]
        mov     dword ptr [esi + 0x3c], eax
        mov     eax, dword ptr [esp + 0x30]
        push    ecx
        mov     ecx, dword ptr [esp + 0x30]
        push    edx
        mov     edx, dword ptr [esp + 0x30]
        push    eax
        mov     eax, dword ptr [esp + 0x30]
        push    ecx
        mov     ecx, dword ptr [esp + 0x30]
        push    edx
        mov     edx, dword ptr [esi + 0x28]
        push    eax
        push    ecx
        push    edx
        mov     dword ptr [esi + 0x34], 0x2
        call    dword ptr [g_10021184]
        mov     edi, eax
        lea     eax, [esp + 0x8]
        push    eax
        push    0x0
        mov     ecx, esi
        call    FUN_1001c040
        neg     al
        sbb     eax, eax
        and     eax, edi
        pop     edi
        pop     esi
        add     esp, 0x14
        ret     0x18
L_c17d:
        mov     ecx, dword ptr [esp + 0x30]
        mov     edx, dword ptr [esp + 0x2c]
        mov     eax, dword ptr [esp + 0x28]
        push    0x0
        push    ecx
        mov     ecx, dword ptr [esp + 0x2c]
        push    edx
        mov     edx, dword ptr [esp + 0x2c]
        push    eax
        mov     eax, dword ptr [esp + 0x2c]
        push    ecx
        mov     ecx, dword ptr [esi + 0x28]
        push    edx
        push    eax
        push    ecx
        call    dword ptr [g_10021184]
        mov     dword ptr [esi + 0x40], eax
        mov     byte ptr [esi + 0x31], 0x1
        pop     esi
        add     esp, 0x14
        ret     0x18
    }
}
