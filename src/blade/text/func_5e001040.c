/*
 * DirectDrawCreate (369 B) — COM factory. Allocates a 0x34-byte object,
 * fills two vtables, calls the real DirectDrawCreate via IAT, and wires
 * up GUID/interface pointers.
 *
 * __stdcall, RET 0xC (3 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_5e001510(void);
extern void *__cdecl FUN_5e02b45e(unsigned int);   /* operator new */
extern void __cdecl FUN_5e02b453(void *);          /* operator delete */
extern int (*g_5e03a4a8)(void);                    /* IAT: real DirectDrawCreate */

__declspec(naked) void __stdcall DirectDrawCreate(void)
{
    __asm {
        sub     esp, 0x10
        push    ebp
        push    esi
        push    edi
        call    FUN_5e001510
        mov     esi, dword ptr [esp + 0x20]
        xor     ebp, ebp
        cmp     esi, ebp
        jz      L_107a
        xor     eax, eax
        mov     ecx, 4
        mov     dword ptr [esp + 0x10], eax
        lea     edi, [esp + 0xc]
        mov     dword ptr [esp + 0x14], eax
        xor     edx, edx
        mov     dword ptr [esp + 0xc], ebp
        mov     dword ptr [esp + 0x18], eax
        repe    cmpsd
        jnz     L_107a
        mov     dword ptr [esp + 0x20], ebp
    L_107a:
        mov     eax, dword ptr [esp + 0x24]
        push    0x34
        mov     dword ptr [eax], ebp
        call    FUN_5e02b45e
        mov     esi, eax
        add     esp, 4
        cmp     esi, ebp
        jz      L_11a3
        mov     ecx, dword ptr [esp + 0x28]
        mov     edx, dword ptr [esp + 0x20]
        push    ebx
        lea     edi, [esi + 0x20]
        lea     ebx, [esi + 0x24]
        mov     dword ptr [esi + 0x4], 0x5e03540c
        mov     dword ptr [esi + 0x8], 0x5e035394
        mov     dword ptr [esi + 0x18], ebp
        mov     dword ptr [edi], ebp
        mov     dword ptr [ebx], ebp
        mov     dword ptr [esi + 0xc], 0x5e035370
        lea     ebp, [esi + 0x28]
        push    ecx
        mov     dword ptr [esi + 0x10], 0x5e035340
        push    edi
        mov     dword ptr [esi + 0x14], 0x5e035320
        push    edx
        mov     dword ptr [ebp], 0
        mov     dword ptr [esi + 0x2c], 0
        mov     dword ptr [esi + 0x30], 0
        mov     dword ptr [esi], 0x5e0352c4
        mov     dword ptr [esi + 0x4], 0x5e035254
        mov     dword ptr [esi + 0x8], 0x5e0351dc
        mov     dword ptr [esi + 0xc], 0x5e0351b8
        mov     dword ptr [esi + 0x10], 0x5e035188
        mov     dword ptr [esi + 0x14], 0x5e035168
        call    dword ptr [g_5e03a4a8]
        test    eax, eax
        mov     dword ptr [esp + 0x24], eax
        jl      L_1163
        mov     eax, dword ptr [edi]
        push    ebp
        push    0x5e0354d0
        push    eax
        mov     ecx, dword ptr [eax]
        call    dword ptr [ecx]
        mov     eax, dword ptr [edi]
        push    ebx
        push    0x5e035580
        push    eax
        mov     edx, dword ptr [eax]
        call    dword ptr [edx]
        mov     edi, dword ptr [edi]
        lea     eax, [esi + 0x2c]
        push    eax
        push    0x5e0355a0
        mov     ecx, dword ptr [edi]
        push    edi
        call    dword ptr [ecx]
        mov     edx, dword ptr [esi]
        push    esi
        call    dword ptr [edx + 0x4]
        pop     ebx
        pop     edi
        mov     eax, dword ptr [esp + 0x20]
        mov     dword ptr [eax], esi
        mov     eax, dword ptr [esp + 0x1c]
        pop     esi
        pop     ebp
        add     esp, 0x10
        ret     0xC
    L_1163:
        push    esi
        mov     dword ptr [esi], 0x5e0352c4
        mov     dword ptr [esi + 0x4], 0x5e035254
        mov     dword ptr [esi + 0x8], 0x5e0351dc
        mov     dword ptr [esi + 0xc], 0x5e0351b8
        mov     dword ptr [esi + 0x10], 0x5e035188
        mov     dword ptr [esi + 0x14], 0x5e035168
        call    FUN_5e02b453
        mov     eax, dword ptr [esp + 0x28]
        add     esp, 4
        pop     ebx
        pop     edi
        pop     esi
        pop     ebp
        add     esp, 0x10
        ret     0xC
    L_11a3:
        pop     edi
        pop     esi
        mov     eax, 0x80004005
        pop     ebp
        add     esp, 0x10
        ret     0xC
    }
}
