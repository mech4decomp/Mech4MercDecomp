/*
 * FUN_004fc100 (100 B) — __thiscall: constructs a 0x1c-byte record object
 * (sets vtable + sub-object, allocates a child node). Returns `this` in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b8c10;
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_00412570(void);
extern void *__cdecl FUN_004084d0(int);
extern void __cdecl FUN_0041fc80(void);

__declspec(naked) void FUN_004fc100(void)
{
    __asm {
        mov     eax, dword ptr [g_007b8c10]
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        push    0x0
        lea     ecx, [esi + 0x10]
        mov     dword ptr [esi + 0x8], 0
        mov     dword ptr [esi + 0xc], 0
        mov     dword ptr [esi], 0x76cd9c
        call    FUN_00412570
        push    0x8
        mov     dword ptr [esi], 0x775ea4
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 0x4
        test    edi, edi
        jz      L_fc15a
        push    0x0
        mov     ecx, edi
        call    FUN_0041fc80
        mov     dword ptr [esi + 0x14], edi
        mov     dword ptr [edi], 0x773328
        pop     edi
        mov     eax, esi
        pop     esi
        ret
    L_fc15a:
        xor     eax, eax
        mov     dword ptr [esi + 0x14], eax
        pop     edi
        mov     eax, esi
        pop     esi
        ret
    }
}
