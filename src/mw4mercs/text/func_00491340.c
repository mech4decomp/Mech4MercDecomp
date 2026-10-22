/*
 * FUN_00491340 (255 B) — MLR __thiscall: reads a set of ints from a
 * stream object (virtual method at vtable+0x24), then looks up a
 * material/entry via a global table and writes back a computed value.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007da848;
extern int g_007b95b8;

extern void __cdecl FUN_00412570(void);
extern char __cdecl FUN_00415230(void);
extern void *__cdecl FUN_00412a50(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_00491340(void)
{
    __asm {
        push    ecx
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [esp+0x14]
        mov     eax, dword ptr [edi]
        mov     esi, ecx
        push    0x4
        push    esi
        mov     ecx, edi
        call    dword ptr [eax+0x24]
        mov     edx, dword ptr [eax]
        push    0x4
        lea     ecx, [esi+0x8]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx+0x24]
        mov     edx, dword ptr [eax]
        push    0x4
        lea     ecx, [esi+0xc]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx+0x24]
        mov     edx, dword ptr [edi]
        push    0x4
        lea     ebx, [esi+0x4]
        push    ebx
        mov     ecx, edi
        call    dword ptr [edx+0x24]
        mov     edx, dword ptr [eax]
        push    0x4
        lea     ecx, [esi+0x10]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx+0x24]
        mov     edx, dword ptr [eax]
        push    0x4
        lea     ecx, [esi+0x14]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx+0x24]
        mov     esi, dword ptr [esi]
        and     esi, 0x3fff
        jz      L_491438
        test    esi, esi
        jg      L_4913ab
        xor     esi, esi
        jmp     L_4913b5
L_4913ab:
        mov     edx, dword ptr [g_007da848]
        mov     esi, dword ptr [edx+esi*4+0x24]
L_4913b5:
        mov     eax, dword ptr [esi+0x10]
        push    eax
        lea     ecx, [esp+0x10]
        call    FUN_00412570
        mov     edx, dword ptr [ebx]
        mov     ecx, dword ptr [esi+0x20]
        and     edx, 0x10000
        cmp     edx, 0x10000
        mov     dword ptr [esp+0x14], ecx
        jnz     L_4913f0
        mov     eax, dword ptr [g_007b95b8]
        mov     ecx, dword ptr [esi+0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      L_4913f0
        mov     eax, dword ptr [esi+0x48]
        jmp     L_4913fd
L_4913f0:
        mov     eax, dword ptr [esi+0x20]
        shl     eax, 0x4
        mov     dword ptr [esp+0x14], eax
        or      eax, dword ptr [esi+0x18]
L_4913fd:
        lea     ecx, [esp+0xc]
        push    ecx
        push    edi
        mov     dword ptr [esp+0x1c], eax
        call    FUN_00412a50
        mov     edx, dword ptr [eax]
        add     esp, 0x8
        push    0x4
        lea     ecx, [esp+0x18]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx+0x24]
        mov     eax, dword ptr [esp+0xc]
        test    eax, eax
        jz      L_491438
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_491438
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_491438:
        pop     edi
        pop     esi
        pop     ebx
        pop     ecx
        ret     0x4
    }
}
