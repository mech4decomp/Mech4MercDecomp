/*
 * FUN_00740a80 (655 B) — worker thread: reads messages from a queue via a
 * vtable call, processes them, and stores them in a linked list guarded by
 * a critical section. __stdcall RET 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_8aaa3c;
extern int g_8aaa40;
extern void *g_76b170;   /* IAT: WaitForMultipleObjects */
extern int g_8aab14;
extern int g_8aaae4;
extern int g_8aab10;
extern void *g_76b2d0;   /* IAT: free */
extern void *g_76b294;   /* IAT: malloc */
extern double g_77b648;
extern int g_8aaabc;
extern void *g_76b110;   /* IAT: EnterCriticalSection */
extern int g_8aaa10;
extern int g_8aaa08;
extern int g_8aaa0c;
extern void *g_76b100;   /* IAT: LeaveCriticalSection */
extern void *g_76b380;   /* IAT: _endthreadex */
extern void __cdecl FUN_00707e90(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_00740a80(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 0x18
        mov     eax, [g_8aaa3c]
        mov     ecx, dword ptr [g_8aaa40]
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    -0x1
        push    0x0
        lea     edx, [esp + 0x28]
        push    edx
        push    0x2
        mov     dword ptr [esp + 0x30], eax
        mov     dword ptr [esp + 0x34], ecx
        call    dword ptr [g_76b170]
        mov     ebp, 0x1
        cmp     eax, ebp
        jnz     L_40cf8
L_40abe:
        mov     eax, [g_8aab14]
        mov     dword ptr [esp + 0x14], eax
L_40ac7:
        mov     eax, [g_8aaae4]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x14]
        push    edx
        mov     edx, dword ptr [g_8aab10]
        push    edx
        push    ebp
        lea     edx, [esp + 0x28]
        push    edx
        lea     edx, [esp + 0x28]
        push    edx
        push    eax
        xor     bl, bl
        call    dword ptr [ecx + 0x64]
        cmp     eax, 0x8877001e
        jnz     L_40b3f
        mov     eax, [g_8aab10]
        test    eax, eax
        jz      L_40b05
        push    eax
        call    dword ptr [g_76b2d0]
        add     esp, 0x4
L_40b05:
        mov     eax, dword ptr [esp + 0x14]
        push    eax
        call    dword ptr [g_76b294]
        mov     ecx, dword ptr [esp + 0x18]
        add     esp, 0x4
        lea     esi, [esp + 0x14]
        push    esi
        push    eax
        mov     [g_8aab10], eax
        push    ebp
        lea     eax, [esp + 0x28]
        push    eax
        lea     eax, [esp + 0x28]
        mov     dword ptr [g_8aab14], ecx
        mov     ecx, dword ptr [g_8aaae4]
        mov     edx, dword ptr [ecx]
        push    eax
        push    ecx
        call    dword ptr [edx + 0x64]
L_40b3f:
        test    eax, eax
        jl      L_40cdf
        mov     edi, dword ptr [g_8aab10]
        cmp     byte ptr [edi], 0xf3
        jnz     L_40bc2
        lea     esi, [edi + 0x1]
        call    FUN_00707e90
        fmul    qword ptr [g_77b648]
        call    FUN_0075db4a
        mov     ecx, dword ptr [esi + 0xc]
        test    ecx, ecx
        jnz     L_40bbc
        mov     ecx, dword ptr [esi + 0x4]
        test    ecx, ecx
        jnz     L_40b78
        mov     dword ptr [esi + 0x4], eax
        jmp     L_40b87
L_40b78:
        mov     ecx, dword ptr [esi + 0x8]
        test    ecx, ecx
        jnz     L_40b84
        mov     dword ptr [esi + 0x8], eax
        jmp     L_40b87
L_40b84:
        mov     dword ptr [esi + 0xc], eax
L_40b87:
        mov     edx, dword ptr [g_8aab10]
        mov     eax, [g_8aaae4]
        mov     ecx, dword ptr [eax]
        push    0x0
        push    0x0
        push    0x0
        push    0x0
        push    0x11
        push    edx
        mov     edx, dword ptr [esp + 0x30]
        push    0x600
        push    edx
        mov     edx, dword ptr [g_8aaabc]
        push    edx
        push    eax
        call    dword ptr [ecx + 0xc4]
        jmp     L_40ac7
L_40bbc:
        mov     edi, dword ptr [g_8aab10]
L_40bc2:
        mov     eax, dword ptr [esp + 0x18]
        test    eax, eax
        jnz     L_40c14
        mov     eax, dword ptr [edi]
        sub     eax, 0x3
        jz      L_40bdf
        sub     eax, 0x2
        jz      L_40be9
        sub     eax, 0x102
        jz      L_40bf3
        jmp     L_40c14
L_40bdf:
        cmp     dword ptr [edi + 0x4], ebp
        jnz     L_40bf3
        sub     dword ptr [edi + 0x20], edi
        jmp     L_40c14
L_40be9:
        cmp     dword ptr [edi + 0x4], ebp
        jnz     L_40bf3
        sub     dword ptr [edi + 0x24], edi
        jmp     L_40c14
L_40bf3:
        mov     eax, dword ptr [edi + 0x8]
        mov     dword ptr [esp + 0x18], eax
        mov     ecx, dword ptr [edi + 0x10]
        mov     dword ptr [esp + 0x14], ecx
        mov     esi, dword ptr [edi + 0xc]
        mov     edx, ecx
        shr     ecx, 0x2
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
        mov     bl, 0x1
L_40c14:
        push    0x8aaa48
        call    dword ptr [g_76b110]
        mov     ebp, dword ptr [g_8aaa10]
        mov     ecx, dword ptr [esp + 0x14]
        xor     eax, eax
        test    ebp, ebp
        jz      L_40c43
L_40c2f:
        cmp     dword ptr [ebp + 0x4], ecx
        jnc     L_40c3f
        mov     eax, ebp
        mov     ebp, dword ptr [ebp]
        test    ebp, ebp
        jnz     L_40c2f
        jmp     L_40c43
L_40c3f:
        test    ebp, ebp
        jnz     L_40c5b
L_40c43:
        add     ecx, 0x20
        push    ecx
        call    dword ptr [g_76b294]
        mov     ebp, eax
        mov     eax, dword ptr [esp + 0x18]
        add     esp, 0x4
        mov     dword ptr [ebp + 0x4], eax
        jmp     L_40c6f
L_40c5b:
        test    eax, eax
        jz      L_40c66
        mov     ecx, dword ptr [ebp]
        mov     dword ptr [eax], ecx
        jmp     L_40c6f
L_40c66:
        mov     edx, dword ptr [ebp]
        mov     dword ptr [g_8aaa10], edx
L_40c6f:
        mov     byte ptr [ebp + 0x1c], bl
        mov     dword ptr [ebp], 0x0
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr [ebp + 0x8], eax
        mov     ecx, dword ptr [esp + 0x18]
        mov     dword ptr [ebp + 0xc], ecx
        mov     edx, dword ptr [esp + 0x1c]
        mov     dword ptr [ebp + 0x10], edx
        call    FUN_00707e90
        fstp    qword ptr [ebp + 0x14]
        mov     ecx, dword ptr [esp + 0x14]
        mov     esi, dword ptr [g_8aab10]
        mov     eax, ecx
        shr     ecx, 0x2
        lea     edi, [ebp + 0x1d]
        rep     movsd
        mov     ecx, eax
        mov     eax, [g_8aaa08]
        and     ecx, 0x3
        test    eax, eax
        rep     movsb
        jz      L_40cbe
        mov     dword ptr [eax], ebp
        jmp     L_40cc4
L_40cbe:
        mov     dword ptr [g_8aaa0c], ebp
L_40cc4:
        push    0x8aaa48
        mov     dword ptr [g_8aaa08], ebp
        call    dword ptr [g_76b100]
        mov     ebp, 0x1
        jmp     L_40ac7
L_40cdf:
        push    -0x1
        push    0x0
        lea     ecx, [esp + 0x28]
        push    ecx
        push    0x2
        call    dword ptr [g_76b170]
        cmp     eax, ebp
        jz      L_40abe
L_40cf8:
        push    0x0
        call    dword ptr [g_76b380]
        add     esp, 0x4
        pop     edi
        xor     eax, eax
        pop     esi
        pop     ebp
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
