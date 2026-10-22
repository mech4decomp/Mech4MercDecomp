/*
 * FUN_005b9140 (353 B) — __thiscall Sensor constructor (RET 0x10, 4 params).
 *
 * Calls base ctor FUN_005f0740, initializes sub-objects and member
 * fields, allocates two arrays of 0x20 pointers (each element a
 * FUN_005b8eb0 object), and sets a float field from FUN_00415020.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005f0740(void *param);
extern void __stdcall FUN_0041fc80(void *param);
extern void __cdecl FUN_005ba7f0(void *a, void *b);
extern void __cdecl FUN_006f4950(void *a);
extern void *__cdecl FUN_004084d0(unsigned int size);
extern void __stdcall FUN_005b8eb0(void *param);
extern void __cdecl FUN_006f49a0(void);
extern float __cdecl FUN_00415020(void);

__declspec(naked) void __stdcall FUN_005b9140(void *param)
{
    

extern int DAT_007f2138;
__asm {
mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x8]
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    eax
        mov     eax, dword ptr [esp + 0x18]
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x20]
        push    ecx
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_005f0740
        xor     ebx, ebx
        lea     edi, [esi + 0x198]
        push    ebx
        mov     ecx, edi
        mov     dword ptr [esi + 0x194], ebx
        call    FUN_0041fc80
        mov     dword ptr [edi], 0x773328
        lea     edi, [esi + 0x1a4]
        push    ebx
        mov     ecx, edi
        call    FUN_0041fc80
        lea     ecx, [esp + 0x1c]
        push    ecx
        lea     edx, [esp + 0x24]
        mov     dword ptr [edi], 0x773328
        push    edx
        lea     ecx, [esi + 0x2dc]
        mov     dword ptr [esi + 0x1b0], ebx
        mov     dword ptr [esi + 0x1b4], ebx
        mov     dword ptr [esi + 0x1b8], ebx
        mov     dword ptr [esi + 0x1bc], ebx
        mov     dword ptr [esi + 0x1c0], ebx
        mov     dword ptr [esi + 0x1c4], ebx
        mov     dword ptr [esi + 0x2d4], ebx
        mov     dword ptr [esi + 0x2d8], ebx
        mov     dword ptr [esp + 0x24], ebx
        call    FUN_005ba7f0
        mov     al, byte ptr [esp + 0x20]
        mov ecx, dword ptr [DAT_007f2138]
        mov     dword ptr [esi + 0x2e0], ebx
        mov     byte ptr [esi + 0x2e8], al
        mov     dword ptr [esi + 0x2e8], ebx
        push    ecx
        mov     dword ptr [esi + 0x2e4], ebx
        mov     byte ptr [esi + 0x2ec], bl
        mov     dword ptr [esi], 0x786d14
        mov     dword ptr [esi + 0x17c], ebx
        mov     dword ptr [esi + 0x180], ebx
        mov     dword ptr [esi + 0x190], 0x40000000
        call    FUN_006f4950
        lea     edi, [esi + 0x1d4]
        mov     ebp, 0x20
L_loop1:
        push    0x24
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebx
        jz      L_loop1_zero
        mov     ecx, eax
        call    FUN_005b8eb0
        jmp     L_loop1_store
L_loop1_zero:
        xor     eax, eax
L_loop1_store:
        mov     dword ptr [edi], eax
        add     edi, 0x4
        dec     ebp
        jnz     L_loop1
        lea     edi, [esi + 0x254]
        mov     ebp, 0x20
L_loop2:
        push    0x24
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebx
        jz      L_loop2_zero
        mov     ecx, eax
        call    FUN_005b8eb0
        jmp     L_loop2_store
L_loop2_zero:
        xor     eax, eax
L_loop2_store:
        mov     dword ptr [edi], eax
        add     edi, 0x4
        dec     ebp
        jnz     L_loop2
        call    FUN_006f49a0
        call    FUN_00415020
        fadd    st, st(0)
        pop     edi
        mov     dword ptr [esi + 0x188], 0x447a0000
        fstp    dword ptr [esi + 0x18c]
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x10
    }


}
