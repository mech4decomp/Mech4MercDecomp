/*
 * FUN_00622c30 (353 B) - __thiscall (ECX = this), RET 0x8 (two stack params).
 *
 * ABL interpreter region. Allocates a 0x28-byte node, initializes it via
 * FUN_006235f0, then inserts it into a growable array on `this` (offsets
 * 0x2ac/0x2b0/0x2b4) and calls FUN_006217c0 / FUN_00621c10.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_006235f0(void);
extern void __cdecl FUN_00625680(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_006217c0(void);
extern void __cdecl FUN_00621c10(void);

__declspec(naked) void FUN_00622c30(void)
{
    __asm {
        sub     esp, 0x8
        push    esi
        push    edi
        push    0x28
        mov     esi, ecx
        call    FUN_004084d0
        mov     edi, dword ptr [esp + 0x18]
        add     esp, 0x4
        test    eax, eax
        jz      L_622c6d
        mov     edx, dword ptr [esi + 0x2b8]
        mov     ecx, edi
        shl     ecx, 0x4
        add     edx, ecx
        mov     ecx, dword ptr [edx + 0x4]
        mov     edx, dword ptr [edx]
        push    ecx
        mov     ecx, dword ptr [esp + 0x1c]
        push    0x0
        push    ecx
        push    edx
        mov     ecx, eax
        call    FUN_006235f0
        jmp     L_622c6f
L_622c6d:
        xor     eax, eax
L_622c6f:
        mov     dword ptr [esp + 0x8], eax
        mov     ecx, 0x1
        shl     edi, 0x4
        mov     byte ptr [eax + 0x1c], cl
        mov     eax, dword ptr [esi + 0x2b8]
        push    ebx
        mov     ebx, edi
        mov     edx, dword ptr [ebx + eax + 0x8]
        cmp     edx, -0x1
        lea     eax, [ebx + eax + 0x8]
        mov     dword ptr [esp + 0x10], ebx
        jz      L_622c9f
        mov     eax, dword ptr [esp + 0xc]
        mov     dword ptr [eax + 0x10], edx
L_622c9f:
        mov     edi, dword ptr [esi + 0x2b0]
        cmp     edi, dword ptr [esi + 0x2b4]
        jz      L_622cc5
        test    edi, edi
        jz      L_622cb7
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr [edi], ecx
L_622cb7:
        add     edi, 0x4
        mov     dword ptr [esi + 0x2b0], edi
        jmp     L_622d66
L_622cc5:
        mov     ebx, dword ptr [esi + 0x2ac]
        mov     eax, edi
        sub     eax, ebx
        sar     eax, 0x2
        mov     dword ptr [esp + 0x18], ecx
        cmp     eax, ecx
        mov     dword ptr [esp + 0x1c], eax
        lea     ecx, [esp + 0x18]
        jc      L_622ce6
        lea     ecx, [esp + 0x1c]
L_622ce6:
        mov     ecx, dword ptr [ecx]
        add     ecx, eax
        push    ebp
        mov     dword ptr [esp + 0x1c], ecx
        jz      L_622d05
        lea     edx, [ecx*4 + 0x0]
        push    edx
        call    FUN_004084d0
        add     esp, 0x4
        mov     ebp, eax
        jmp     L_622d07
L_622d05:
        xor     ebp, ebp
L_622d07:
        mov     eax, dword ptr [esp + 0x1c]
        push    eax
        push    ebp
        push    edi
        push    ebx
        call    FUN_00625680
        add     esp, 0x10
        test    eax, eax
        jz      L_622d21
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [eax], ecx
L_622d21:
        mov     edx, dword ptr [esp + 0x1c]
        push    edx
        add     eax, 0x4
        push    eax
        push    edi
        push    edi
        call    FUN_00625680
        add     esp, 0x10
        test    ebx, ebx
        mov     edi, eax
        mov     dword ptr [esp + 0x20], ebx
        jz      L_622d47
        push    ebx
        call    FUN_004084e0
        add     esp, 0x4
L_622d47:
        mov     eax, dword ptr [esp + 0x1c]
        mov     ebx, dword ptr [esp + 0x14]
        lea     ecx, [ebp + eax*4]
        mov     dword ptr [esi + 0x2ac], ebp
        mov     dword ptr [esi + 0x2b0], edi
        mov     dword ptr [esi + 0x2b4], ecx
        pop     ebp
L_622d66:
        mov     edx, dword ptr [esp + 0xc]
        push    edx
        mov     ecx, esi
        call    FUN_006217c0
        mov     ecx, dword ptr [esi + 0x2b8]
        mov     dl, byte ptr [ebx + ecx + 0xc]
        test    dl, dl
        pop     ebx
        jz      L_622d89
        push    eax
        mov     ecx, esi
        call    FUN_00621c10
L_622d89:
        pop     edi
        pop     esi
        add     esp, 0x8
        ret     0x8
    }
}
