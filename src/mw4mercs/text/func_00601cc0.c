/*
 * FUN_00601CC0 (550 B) — GameOS object scan/update routine.
 *
 * Reads a global object pointer (DAT_007dab44 ^ DAT_007dab40), walks
 * several fixed-size arrays of sub-objects, marks slots in a local
 * 8-byte bitmap, and conditionally calls FUN_00622930 / FUN_00621fd0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7dab44;
extern int g_7dab40;
extern void __cdecl FUN_0041fd80(void);
extern int __cdecl FUN_00622930(int a, int b);
extern void __cdecl FUN_00621fd0(int a, void *b, int c);

__declspec(naked) void FUN_00601CC0(void)
{
    __asm {
        sub     esp, 0x3c
        mov     eax, dword ptr [g_7dab44]
        push    ebx
        push    esi
        mov     dword ptr [esp + 0xc], ecx
        mov     ecx, dword ptr [eax]
        push    edi
        xor     ecx, dword ptr [g_7dab40]
        mov     edx, dword ptr [ecx + 0xc]
        lea     eax, [ecx + 0xc]
        xor     edx, 0x85739531
        mov     cl, byte ptr [edx + 0x16]
        test    cl, cl
        jz      loc_601cf7
        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        mov     ecx, dword ptr [ecx + 0x50]
        jmp     loc_601d02
loc_601cf7:
        mov     edx, dword ptr [eax]
        xor     edx, 0x85739531
        mov     ecx, dword ptr [edx + 0x54]
loc_601d02:
        mov     edx, dword ptr [ecx + 0xe4]
        test    edx, edx
        jz      loc_601edf
        mov     edx, dword ptr [ecx + 0x38]
        test    edx, edx
        jnz     loc_601edf
        mov     edx, dword ptr [eax]
        xor     edx, 0x85739531
        xor     eax, eax
        mov     dword ptr [esp + 0x20], eax
        lea     ecx, [edx + 0x3584]
        mov     dword ptr [esp + 0x24], eax
        mov     dword ptr [esp + 0x18], ecx
        mov     esi, 0xff
loc_601d3c:
        mov     al, byte ptr [ecx - 0x4c]
        test    al, al
        jz      loc_601d69
        mov     eax, dword ptr [ecx]
        test    eax, eax
        jz      loc_601d69
        mov     eax, dword ptr [eax + 0x170]
        test    eax, eax
        jz      loc_601d69
        mov     edi, dword ptr [eax + 0x4]
        cmp     dword ptr [edi], 0x429
        jnz     loc_601d69
        mov     eax, dword ptr [eax + 0x4cc]
        mov     byte ptr [esp + eax + 0x20], 0x1
loc_601d69:
        add     ecx, 0x2038
        dec     esi
        jnz     loc_601d3c
        lea     ecx, [edx + 0x205d30]
        mov     dword ptr [esp + 0x1c], ecx
        mov     esi, 0x18
loc_601d81:
        mov     eax, dword ptr [ecx]
        test    eax, eax
        jz      loc_601d92
        mov     eax, dword ptr [eax + 0x4cc]
        mov     byte ptr [esp + eax + 0x20], 0x1
loc_601d92:
        add     ecx, 0x22ac
        dec     esi
        jnz     loc_601d81
        push    ebp
        mov     byte ptr [esp + 0x13], 0x0
        xor     ebp, ebp
        lea     ebx, [edx + 0x204d00]
loc_601da9:
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jnz     loc_601df7
        mov     ecx, dword ptr [ebx]
        call    FUN_0041fd80
        cmp     ebp, 0x8
        mov     ecx, dword ptr [eax + 0x514]
        mov     dword ptr [esp + 0x18], ecx
        mov     esi, ebp
        jge     loc_601dee
loc_601dcb:
        mov     edi, ebx
        mov     ecx, dword ptr [edi]
        call    FUN_0041fd80
        mov     edx, dword ptr [esp + 0x18]
        cmp     edx, dword ptr [eax + 0x514]
        jnz     loc_601de9
        inc     esi
        add     edi, 0x4
        cmp     esi, 0x8
        __emit 0x7C /* __emit: backward jl loc_601dcb; MSVC6 miscomputes rel (E2 vs ref E4) due to call-reloc between branch and target */
        __emit 0xE4
        jmp     loc_601dee
loc_601de9:
        mov     byte ptr [esp + 0x13], 0x1
loc_601dee:
        inc     ebp
        add     ebx, 0x4
        cmp     ebp, 0x8
        jl      loc_601da9
loc_601df7:
        or      ebx, 0xffffffff
        mov     edi, 0xffff3cb0
        xor     esi, esi
        pop     ebp
loc_601e02:
        mov     al, byte ptr [esp + esi + 0x20]
        test    al, al
        jz      loc_601e38
        mov     ecx, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [ecx + 0x225c]
        or      eax, 0xffffffff
        sub     eax, esi
        push    eax
        push    0x2b
        call    FUN_00622930
        cmp     eax, edi
        mov     dword ptr [esp + esi*4 + 0x28], eax
        jle     loc_601e2f
        mov     edi, eax
        mov     ebx, esi
        jmp     loc_601e38
loc_601e2f:
        jnz     loc_601e38
        or      esi, 0xffffffff
        or      ebx, 0xffffffff
        inc     edi
loc_601e38:
        inc     esi
        cmp     esi, 0x8
        jl      loc_601e02
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jz      loc_601edf
        mov     esi, dword ptr [esp + 0x18]
        mov     edi, 0xff
loc_601e53:
        mov     al, byte ptr [esi - 0x4c]
        test    al, al
        jz      loc_601e94
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      loc_601e94
        mov     eax, dword ptr [eax + 0x170]
        test    eax, eax
        jz      loc_601e94
        mov     edx, dword ptr [eax + 0x4]
        cmp     dword ptr [edx], 0x429
        jnz     loc_601e94
        cmp     dword ptr [eax + 0x4cc], ebx
        jnz     loc_601e94
        push    0x1
        add     eax, 0x14
        push    eax
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [eax + 0x225c]
        push    0x34
        call    FUN_00621fd0
loc_601e94:
        add     esi, 0x2038
        dec     edi
        jnz     loc_601e53
        mov     esi, dword ptr [esp + 0x1c]
        mov     edi, 0x18
loc_601ea6:
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      loc_601ed6
        mov     ecx, dword ptr [eax + 0x4]
        cmp     dword ptr [ecx], 0x429
        jnz     loc_601ed6
        cmp     dword ptr [eax + 0x4cc], ebx
        jnz     loc_601ed6
        mov     edx, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [edx + 0x225c]
        push    0x1
        add     eax, 0x14
        push    eax
        push    0x34
        call    FUN_00621fd0
loc_601ed6:
        add     esi, 0x22ac
        dec     edi
        jnz     loc_601ea6
loc_601edf:
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x3c
        ret
    }
}
