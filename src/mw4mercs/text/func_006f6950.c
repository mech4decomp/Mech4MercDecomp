/*
 * FUN_006f6950 (254 B) — __thiscall (ECX = this), RET 4 (one stack param).
 *
 * Filter() method. Walks a linked list from this+0x8, calls FUN_006f5d90
 * on each node, dispatches on node type via a jump table (0x6f6a50), and
 * returns a boolean (AL). Uses an IAT call through 0x0076b2ac and the
 * assert/error helper FUN_006fabf0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_006f5d90(void);
extern void __stdcall FUN_006fabf0(void);
extern void *g_0076b2ac;

__declspec(naked) void __stdcall FUN_006f6950(void *param)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        mov     eax, dword ptr [ecx + 0x4]
        test    eax, eax
        push    ebx
        push    esi
        push    edi
        mov     dword ptr [ebp - 4], ecx
        jnz     L_696c
        pop     edi
        pop     esi
        mov     al, 0x1
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4
L_696c:
        mov     edi, dword ptr [ecx + 0x8]
        test    edi, edi
        jz      L_6a18
        mov     eax, dword ptr [ebp + 0x8]
        add     eax, 0x4
        mov     dword ptr [ebp + 0x8], eax
L_6980:
        xor     bl, bl
        test    edi, edi
        jnz     L_698a
        xor     esi, esi
        jmp     L_698f
L_698a:
        mov     esi, edi
        mov     edi, dword ptr [edi + 0x14]
L_698f:
        mov     ecx, dword ptr [esi]
        mov     edx, dword ptr [ebp + 0x8]
        push    ecx
        push    edx
        call    FUN_006f5d90
        test    eax, eax
        jz      L_69e4
        mov     ecx, dword ptr [esi + 0x4]
        sub     ecx, 0x0
        jz      L_69d5
        dec     ecx
        jz      L_69be
        push    0x79fd00
        call    FUN_006fabf0
        add     esp, 0x4
        test    eax, eax
        jz      L_69e4
        int     3
        jmp     L_69e4
L_69be:
        mov     ecx, dword ptr [esi + 0x10]
        mov     edx, dword ptr [eax + 0x4]
        push    ecx
        push    edx
        call    dword ptr [g_0076b2ac]
        add     esp, 0x8
        test    eax, eax
        jnz     L_69e4
        jmp     L_69e2
L_69d5:
        mov     eax, dword ptr [eax + 0x8]
        cmp     eax, dword ptr [esi + 0x8]
        jl      L_69e4
        cmp     eax, dword ptr [esi + 0xc]
        jg      L_69e4
L_69e2:
        mov     bl, 0x1
L_69e4:
        mov     eax, dword ptr [ebp - 4]
        mov     eax, dword ptr [eax + 0x4]
        dec     eax
        cmp     eax, 0x3
        ja      L_6a0d
        jmp     dword ptr [eax*4 + 0x6f6a50]
L_69f7:
        test    bl, bl
        jz      L_6a45
        jmp     L_6a0d
L_69fd:
        test    bl, bl
        jnz     L_6a28
        jmp     L_6a0d
L_6a03:
        test    bl, bl
        jz      L_6a28
        jmp     L_6a0d
L_6a09:
        test    bl, bl
        jnz     L_6a45
L_6a0d:
        test    edi, edi
        jnz     L_6980
        mov     ecx, dword ptr [ebp - 4]
L_6a18:
        mov     eax, dword ptr [ecx + 0x4]
        dec     eax
        cmp     eax, 0x3
        ja      L_6a33
        jmp     dword ptr [eax*4 + 0x6f6a60]
L_6a28:
        pop     edi
        pop     esi
        mov     al, 0x1
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4
L_6a33:
        push    0x79fcd8
        call    FUN_006fabf0
        add     esp, 0x4
        test    eax, eax
        jz      L_6a45
        int     3
L_6a45:
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4
    }
}
