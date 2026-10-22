/*
 * FUN_004f1310 (104 B) — MLR/Adept component factory. Allocates 0x40
 * bytes; on success constructs (vtable 0x774e80) via FUN_004f1610,
 * virtual init calls, and FUN_004da840.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_007dc138;
extern void *__cdecl FUN_004084d0(int);
extern void __cdecl FUN_004f1610(void);
extern int  __cdecl FUN_004da840(int);

__declspec(naked) void FUN_004f1310(void)
{
    __asm {
        push    esi
        push    0x40
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_1374
        mov     eax, dword ptr [esp+0xc]
        mov     ecx, dword ptr [g_007dc138]
        push    edi
        mov     edi, dword ptr [esp+0xc]
        push    eax
        push    edi
        push    ecx
        mov     ecx, esi
        call    FUN_004f1610
        mov     edx, dword ptr [edi]
        push    0x4
        lea     eax, [esp+0x14]
        push    eax
        mov     ecx, edi
        mov     dword ptr [esi], 0x774e80
        call    dword ptr [edx+0x20]
        mov     edx, dword ptr [edi]
        push    0x4
        lea     eax, [esi+0x3c]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx+0x20]
        mov     edx, dword ptr [esp+0x10]
        mov     ecx, dword ptr [esp+0x14]
        push    edx
        mov     dword ptr [esi+0x34], ecx
        call    FUN_004da840
        mov     dword ptr [esi+0x38], eax
        pop     edi
        mov     eax, esi
        pop     esi
        ret
L_1374:
        xor     eax, eax
        pop     esi
        ret
    }
}
