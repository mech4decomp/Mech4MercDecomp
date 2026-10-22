/*
 * FUN_004d82f0 (96 B) — __thiscall (RET 0x8). Same shape as FUN_004d81d0;
 * calls FUN_004d8cf0 instead of FUN_004d8a80.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_0075dc00(void);
extern void FUN_004d8cf0(void);
extern void FUN_004d8090(void);
extern unsigned char g_0076b768;

__declspec(naked) void FUN_004d82f0(void)
{
    __asm {
        mov     eax, 0x1000
        call    FUN_0075dc00
        mov     al, byte ptr [g_0076b768]
        push    esi
        push    edi
        mov     esi, ecx
        mov     byte ptr [esp+0x8], al
        xor     eax, eax
        mov     ecx, 0x3ff
        lea     edi, [esp+0x9]
        rep stosd
        push    0x0
        push    0x1000
        lea     ecx, [esp+0x10]
        stosw
        push    ecx
        push    esi
        stosb
        call    FUN_004d8cf0
        mov     eax, dword ptr [esp+0x1010]
        mov     ecx, dword ptr [esp+0x100c]
        lea     edx, [esp+0x8]
        push    edx
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_004d8090
        pop     edi
        pop     esi
        add     esp, 0x1000
        ret     0x8
    }
}
