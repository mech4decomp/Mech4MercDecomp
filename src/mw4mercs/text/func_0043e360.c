/*
 * FUN_0043e360 (228 B) — MLR mesh constructor (__thiscall, RET 0xc).
 * Sets vtable 0x76e610, initializes a buffer pair at this+0x88, and
 * allocates vertex/index storage via virtual calls on the stream object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004420c0(void);
extern int  FUN_006fab90(void);

__declspec(naked) void FUN_0043e360(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [ebp + 0x10]
        push    ebx
        push    esi
        mov     esi, dword ptr [ebp + 0xc]
        push    edi
        push    eax
        mov     ebx, ecx
        mov     ecx, dword ptr [ebp + 0x8]
        push    esi
        push    ecx
        mov     ecx, ebx
        call    FUN_004420c0
        mov     eax, dword ptr [ebp + 0x10]
        cmp     eax, 0x3
        lea     edi, [ebx + 0x88]
        mov     dword ptr [edi], 0x0
        mov     dword ptr [edi + 0x4], 0x0
        mov     dword ptr [ebx], 0x76e610
        jge     L_c1
        push    0x76e300
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_444
        int     3
        mov     dword ptr [ebx + 0x90], edi
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        pop     ebp
        ret     0xc
L_c1:
        cmp     eax, 0xb
        jge     L_f4
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [ebp + 0x10]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [ebp + 0x10]
        mov     edx, dword ptr [esi]
        lea     ecx, [eax*4]
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx + 0x18]
        mov     dword ptr [ebx + 0x90], edi
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        pop     ebp
        ret     0xc
L_f4:
        mov     edx, dword ptr [esi]
        lea     eax, [edi + 0x4]
        push    0x4
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [edi + 0x4]
        test    eax, eax
        mov     dword ptr [ebp + 0x10], eax
        jbe     L_428
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x4]
        mov     edx, dword ptr [esi]
        mov     dword ptr [edi], eax
        mov     eax, dword ptr [ebp + 0x10]
        lea     ecx, [eax*4]
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx + 0x18]
        jmp     L_42e
L_428:
        mov     dword ptr [edi], 0x0
L_42e:
        mov     ecx, dword ptr [ebx + 0x8c]
        mov     eax, 0x100
        cmp     ecx, eax
        jbe     L_444
        mov     edx, dword ptr [edi]
        mov     dword ptr [edi], edx
        mov     dword ptr [edi + 0x4], eax
L_444:
        mov     dword ptr [ebx + 0x90], edi
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        pop     ebp
        ret     0xc
    }
}
