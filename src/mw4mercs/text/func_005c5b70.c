/*
 * FUN_005c5b70 (281 B) — __thiscall, RET 0x10 (4 stack params). Copies a
 * 0x30-byte block, stores a tagged pointer, and dispatches a virtual method.
 *
 * __thiscall (ECX = this), RET 0x10.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005c59b0(void);
extern void __cdecl FUN_005d1180(void);
extern void __cdecl FUN_005c60d0(void);
extern void __cdecl FUN_005c6100(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_005cb6c0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void __stdcall FUN_005c5b70(void *param)
{
    __asm {
        push    ebp
        mov     ebp, ecx
        mov     eax, dword ptr [ebp]
        call    dword ptr [eax + 0x1d4]
        test    al, al
        jz      L_5c85
        mov     al, byte ptr [ebp + 0x548]
        test    al, al
        jnz     L_5b9d
        mov     ecx, ebp
        call    FUN_005c59b0
        cmp     al, 0x1
        jz      L_5c85
L_5b9d:
        mov     ecx, dword ptr [esp + 0x14]
        push    ebx
        push    esi
        push    ecx
        mov     ecx, ebp
        call    FUN_005d1180
        mov     ebx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [ebx + 0x4]
        mov     edx, dword ptr [ebx]
        mov     ecx, dword ptr [ebx + 0x8]
        mov     dword ptr [ebp + 0x4f4], eax
        mov     al, byte ptr [esp + 0x14]
        test    al, al
        mov     dword ptr [ebp + 0x4f0], edx
        mov     dword ptr [ebp + 0x4f8], ecx
        mov     byte ptr [ebp + 0x548], 0x0
        jnz     L_5be3
        mov     ecx, ebp
        call    FUN_005c60d0
        fchs
        jmp     L_5bf8
L_5be3:
        cmp     byte ptr [esp + 0x18], 0x1
        mov     ecx, ebp
        jnz     L_5bf3
        call    FUN_005c60d0
        jmp     L_5bf8
L_5bf3:
        call    FUN_005c6100
L_5bf8:
        push    0x30
        fstp    dword ptr [esp + 0x1c]
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_5c29
        mov     edx, dword ptr [ebp + 0x170]
        mov     esi, dword ptr [edx + 0xd8]
        push    edi
        add     esi, 0x80
        mov     ecx, 0xc
        mov     edi, eax
        rep movsd
        pop     edi
        jmp     L_5c2b
L_5c29:
        xor     eax, eax
L_5c2b:
        mov     ecx, dword ptr [ebp + 0x59c]
        mov     esi, ecx
        and     ecx, 0xfffffffe
        or      eax, 0x1
        mov     dword ptr [esp + 0x1c], ecx
        lea     ecx, [esp + 0x1c]
        mov     dword ptr [ebp + 0x59c], eax
        call    FUN_005cb6c0
        mov     eax, esi
        and     eax, 0x1
        cmp     al, 0x1
        jnz     L_5c66
        mov     ecx, esi
        and     esi, 0xfffffffc
        push    esi
        and     ecx, 0x2
        call    FUN_004084e0
        add     esp, 0x4
L_5c66:
        mov     edx, dword ptr [esp + 0x14]
        fld     dword ptr [esp + 0x18]
        mov     esi, dword ptr [ebp]
        push    0x0
        push    edx
        call    FUN_0075db4a
        push    eax
        push    ebx
        mov     ecx, ebp
        call    dword ptr [esi + 0x1bc]
        pop     esi
        pop     ebx
L_5c85:
        pop     ebp
        ret     0x10
    }
}
