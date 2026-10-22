/*
 * FUN_004f1170 (139 B) — MLR/Adept component factory. Tries
 * FUN_004f2250 first; on failure allocates 0x40 bytes and constructs
 * (vtable 0x774e30) via FUN_004f1610 + virtual init calls.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_007dc13c;
extern void *__cdecl FUN_004f2250(void *, void *);
extern void __cdecl FUN_004f1570(void *);
extern void *__cdecl FUN_004084d0(int);
extern void __cdecl FUN_004f1610(void);

__declspec(naked) void FUN_004f1170(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp+0xc]
        push    esi
        push    edi
        mov     edi, dword ptr [esp+0x10]
        push    ebx
        push    edi
        call    FUN_004f2250
        mov     esi, eax
        add     esp, 0x8
        test    esi, esi
        jz      L_11a2
        push    edi
        mov     ecx, esi
        call    FUN_004f1570
        mov     eax, dword ptr [edi]
        push    0xc
        mov     ecx, edi
        call    dword ptr [eax+0x18]
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        ret
L_11a2:
        push    0x40
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_11f5
        mov     ecx, dword ptr [g_007dc13c]
        push    ebx
        push    edi
        push    ecx
        mov     ecx, esi
        call    FUN_004f1610
        mov     edx, dword ptr [edi]
        push    0x4
        lea     eax, [esi+0x34]
        push    eax
        mov     ecx, edi
        mov     dword ptr [esi], 0x774e30
        call    dword ptr [edx+0x20]
        mov     edx, dword ptr [eax]
        push    0x4
        lea     ecx, [esi+0x38]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx+0x20]
        mov     edx, dword ptr [eax]
        push    0x4
        lea     ecx, [esi+0x3c]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx+0x20]
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        ret
L_11f5:
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        ret
    }
}
