/*
 * FUN_004FE1E0 (418 B) -- MLR/Adept object constructor variant (__thiscall,
 * RET 0x14, 5 params). Sets vtable 0x776108, reads a stream via virtual
 * calls, copies a 0xc-dword template from 0x7b9460, allocates child objects
 * (FUN_004084d0/FUN_004179b0) and copies a 0xc-dword block via FUN_00417d80.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_00412a00(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004179b0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00417d80(void);

extern int g_7b8c10;          /* DAT_007b8c10 */

__declspec(naked) void __stdcall FUN_004fe1e0(void)
{
    __asm {
        sub     esp, 0x48
        mov     eax, dword ptr [g_7b8c10]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     ebx, ecx
        push    eax
        call    FUN_00415180
        mov     ebp, dword ptr [esp + 0x68]
        mov     edx, dword ptr [ebp]
        xor     eax, eax
        mov     dword ptr [ebx + 0x90], eax
        mov     dword ptr [ebx + 0x8], eax
        mov     dword ptr [ebx + 0xc], eax
        mov     dword ptr [ebx + 0x94], eax
        lea     eax, [ebx + 0x10]
        push    0x40
        push    eax
        mov     ecx, ebp
        mov     dword ptr [ebx], 0x776108
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [ebp]
        push    0x1
        lea     ecx, [ebx + 0x9c]
        push    ecx
        mov     ecx, ebp
        call    dword ptr [eax + 0x20]
        lea     edx, [esp + 0x14]
        push    edx
        lea     edi, [ebx + 0x50]
        mov     ecx, 0xc
        mov     esi, 0x7b9460
        push    ebp
        rep movsd
        mov     dword ptr [ebx + 0x8c], 0xbf800000
        mov     dword ptr [esp + 0x1c], 0x0
        call    FUN_00412a00
        mov     eax, dword ptr [esp + 0x1c]
        add     esp, 0x8
        test    eax, eax
        jz      L_4fe287
        mov     esi, dword ptr [esp + 0x5c]
        push    eax
        push    esi
        call    dword ptr [esp + 0x68]
        mov     edi, eax
        add     esp, 0x8
        cmp     edi, esi
        mov     dword ptr [esp + 0x64], edi
        jz      L_4fe28b
        mov     dword ptr [edi + 0x128], ebx
        jmp     L_4fe28b
L_4fe287:
        mov     edi, dword ptr [esp + 0x64]
L_4fe28b:
        mov     eax, dword ptr [ebp]
        push    0x1
        lea     ecx, [esp + 0x17]
        push    ecx
        mov     ecx, ebp
        mov     dword ptr [ebx + 0x98], edi
        call    dword ptr [eax + 0x20]
        mov     al, byte ptr [esp + 0x13]
        mov     dl, al
        dec     al
        test    dl, dl
        mov     byte ptr [esp + 0x13], al
        jbe     L_4fe35b
L_4fe2b4:
        push    0xa0
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_4fe2e1
        mov     ecx, dword ptr [esp + 0x6c]
        mov     edx, dword ptr [esp + 0x60]
        push    ecx
        mov     ecx, dword ptr [esp + 0x60]
        push    ebp
        push    edi
        push    edx
        push    ecx
        mov     ecx, eax
        call    FUN_004fe1e0
        mov     esi, eax
        jmp     L_4fe2e3
L_4fe2e1:
        xor     esi, esi
L_4fe2e3:
        push    esi
        lea     ecx, [ebx + 0x90]
        call    FUN_004179b0
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        jnz     L_4fe347
        mov     edx, dword ptr [ebx + 0x98]
        cmp     edx, dword ptr [esi + 0x98]
        jnz     L_4fe347
        lea     eax, [ebx + 0x10]
        push    eax
        lea     ebp, [esi + 0x10]
        push    ebp
        lea     ecx, [esp + 0x20]
        call    FUN_00417d80
        mov     eax, dword ptr [esp + 0x48]
        mov     edx, dword ptr [esp + 0x50]
        mov     edi, ebp
        mov     ecx, 0xc
        lea     esi, [esp + 0x18]
        rep movsd
        mov     ecx, dword ptr [esp + 0x4c]
        mov     edi, dword ptr [esp + 0x64]
        mov     dword ptr [ebp + 0x30], eax
        mov     eax, dword ptr [esp + 0x54]
        mov     dword ptr [ebp + 0x34], ecx
        mov     dword ptr [ebp + 0x38], edx
        mov     dword ptr [ebp + 0x3c], eax
        mov     ebp, dword ptr [esp + 0x68]
L_4fe347:
        mov     al, byte ptr [esp + 0x13]
        mov     cl, al
        dec     al
        test    cl, cl
        mov     byte ptr [esp + 0x13], al
        ja      L_4fe2b4
L_4fe35b:
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        jz      L_4fe376
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_4fe376
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_4fe376:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        add     esp, 0x48
        ret     0x14
    }
}
