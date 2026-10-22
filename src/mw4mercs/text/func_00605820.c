/*
 * FUN_00605820 (494 B) — __thiscall-ish (RET 0xc). Iterates over a packed
 * per-frame animation-blend record array, building a local descriptor and
 * dispatching through a caller-supplied function pointer (param_3).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0040ccd0(void);
extern void __cdecl FUN_0040c430(void);
extern void __cdecl FUN_00419460(void);
extern void __cdecl FUN_0041a160(void);
extern void __cdecl FUN_0041c830(void);

__declspec(naked) void FUN_00605820(void)
{
    __asm {
        sub     esp, 0x78
        push    ebp
        mov     ebp, dword ptr [esp + 0x80]
        cmp     dword ptr [ebp], 0
        jle     L_end
        lea     eax, [ebp + 0xe84]
        push    ebx
        mov     dword ptr [esp + 8], eax
        push    esi
        mov     eax, 0xfffffffc
        sub     eax, ebp
        push    edi
        lea     edi, [ebp + 4]
        lea     esi, [ebp + 0x398]
        lea     ebx, [ebp + 0x6e4]
        mov     dword ptr [esp + 0x14], eax
L_loop:
        push    0x7b8d88
        lea     ecx, [esp + 0x54]
        mov     byte ptr [esp + 0x4c], 0
        mov     byte ptr [esp + 0x4d], 0
        mov     byte ptr [esp + 0x4e], 0
        mov     byte ptr [esp + 0x50], 0
        mov     byte ptr [esp + 0x4f], 0
        call    FUN_0040c410
        push    0x7b8d88
        lea     ecx, [esp + 0x60]
        call    FUN_0040ccd0
        push    0x7b8d68
        lea     ecx, [esp + 0x6c]
        call    FUN_0040c410
        push    0x7b8cd8
        lea     ecx, [esp + 0x78]
        call    FUN_0040c430
        mov     al, byte ptr [edi]
        xor     cl, cl
        test    al, 2
        mov     dword ptr [esp + 0x84], 0
        jz      L_t10
        mov     ecx, dword ptr [esi - 0x34c]
        mov     edx, dword ptr [esi - 0x348]
        mov     dword ptr [esp + 0x50], ecx
        mov     ecx, dword ptr [esi - 0x344]
        mov     dword ptr [esp + 0x58], ecx
        mov     dword ptr [esp + 0x54], edx
        mov     byte ptr [esp + 0x48], 1
        mov     cl, 1
L_t10:
        test    al, 0x10
        jz      L_t04
        mov     ecx, dword ptr [ebx - 4]
        mov     edx, dword ptr [ebx - 8]
        mov     dword ptr [esp + 0x78], ecx
        mov     ecx, dword ptr [ebx + 4]
        mov     dword ptr [esp + 0x74], edx
        mov     edx, dword ptr [ebx]
        mov     dword ptr [esp + 0x80], ecx
        mov     dword ptr [esp + 0x7c], edx
        mov     byte ptr [esp + 0x49], 1
        mov     cl, 1
L_t04:
        test    al, 4
        jz      L_t08
        test    al, 8
        mov     edx, dword ptr [esi - 4]
        mov     ecx, dword ptr [esi]
        lea     ebp, [esi - 4]
        mov     dword ptr [esp + 0x5c], edx
        mov     edx, dword ptr [esi + 4]
        mov     dword ptr [esp + 0x60], ecx
        mov     dword ptr [esp + 0x64], edx
        jz      L_t04b
        push    0x7b9460
        lea     ecx, [esp + 0x1c]
        call    FUN_00419460
        lea     eax, [esp + 0x74]
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_0041a160
        lea     ecx, [esp + 0x18]
        push    ecx
        push    ebp
        lea     ecx, [esp + 0x64]
        call    FUN_0041c830
        jmp     L_t04c
L_t04b:
        mov     edx, dword ptr [ebp]
        mov     eax, dword ptr [esi]
        mov     ecx, dword ptr [esi + 4]
        mov     dword ptr [esp + 0x5c], edx
        mov     dword ptr [esp + 0x60], eax
        mov     dword ptr [esp + 0x64], ecx
L_t04c:
        mov     ebp, dword ptr [esp + 0x8c]
        mov     byte ptr [esp + 0x4a], 1
        mov     cl, 1
L_t08:
        mov     al, byte ptr [edi]
        test    al, 8
        jz      L_t20
        mov     edx, dword ptr [esi + 0x7a4]
        mov     ecx, dword ptr [esi + 0x7a8]
        mov     dword ptr [esp + 0x68], edx
        mov     edx, dword ptr [esi + 0x7ac]
        mov     dword ptr [esp + 0x6c], ecx
        mov     dword ptr [esp + 0x70], edx
        mov     byte ptr [esp + 0x4b], 1
        mov     cl, 1
L_t20:
        test    al, 0x20
        jz      L_t20b
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [eax]
        mov     dword ptr [esp + 0x84], ecx
        mov     byte ptr [esp + 0x4c], 1
        jmp     L_call
L_t20b:
        test    cl, cl
        jz      L_loopend
L_call:
        mov     edx, dword ptr [esp + 0x90]
        mov     eax, dword ptr [esp + 0x14]
        push    edx
        add     eax, edi
        push    eax
        lea     ecx, [esp + 0x50]
        push    ecx
        call    dword ptr [esp + 0xa0]
        add     esp, 0xc
L_loopend:
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [ebp]
        add     ecx, 4
        add     ebx, 0x10
        add     esi, 0xc
        inc     edi
        add     edx, edi
        cmp     edx, eax
        mov     dword ptr [esp + 0x10], ecx
        jl      L_loop
        pop     edi
        pop     esi
        pop     ebx
L_end:
        pop     ebp
        add     esp, 0x78
        ret     0xc
    }
}
