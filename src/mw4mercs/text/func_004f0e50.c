/*
 * FUN_004f0e50 (115 B) — MLR/Adept component init helper. __thiscall.
 * Calls FUN_004f2210, does virtual init calls, then asserts
 * "Not implemented" via FUN_006fab90.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_0076d414;                 /* "Not implemented" string */
extern void __cdecl FUN_004f2210(void);
extern int  __cdecl FUN_006fab90(char *);

__declspec(naked) void FUN_004f0e50(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x34
        push    esi
        mov     esi, dword ptr [ebp+0x8]
        push    edi
        mov     edi, ecx
        push    esi
        call    FUN_004f2210
        mov     eax, dword ptr [esi]
        push    0x30
        lea     ecx, [ebp-0x34]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax+0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [ebp+0x8]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x20]
        mov     eax, dword ptr [ebp+0x8]
        test    eax, eax
        jz      L_0ea9
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [ebp-0x4]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x20]
        test    byte ptr [ebp+0x8], 0x20
        jz      L_0ea9
        mov     eax, dword ptr [edi+0x24]
        mov     edx, dword ptr [esi]
        push    0x40
        add     eax, 0xb0
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x20]
L_0ea9:
        push    offset g_0076d414
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        pop     edi
        pop     esi
        jz      L_0ebd
        int     3
L_0ebd:
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
