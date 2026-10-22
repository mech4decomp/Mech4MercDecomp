/*
 * FUN_005a1310 (248 B) — Initialization function.
 *
 * __thiscall (ECX = this), RET 0x4 (one stack param).
 * Allocates and initializes several sub-objects.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void   __stdcall FUN_0041fcb0(void);
extern void   __stdcall FUN_0041fcd0(int);
extern void   __stdcall FUN_004084e0(void *);
extern void * __stdcall FUN_004084d0(int);
extern void   __stdcall FUN_00416bc0(void *);

__declspec(naked) void __fastcall FUN_005a1310(int this_ptr)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, ecx
        push    edi
        lea     edi, [esi + 0x518]
        mov     ecx, edi
        call    FUN_0041fcb0
        mov     ebx, dword ptr [esp + 0x10]
        push    ebx
        mov     ecx, edi
        call    FUN_0041fcd0
        mov     eax, dword ptr [esi + 0x534]
        test    eax, eax
        mov     dword ptr [esi + 0x528], 0x0
        jz      alloc_1
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
alloc_1:
        push    0xc
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      null_1
        lea     ecx, [ebx + 0x3f8]
        mov     dword ptr [eax + 0x4], ecx
        mov     ecx, dword ptr [ecx]
        mov     dword ptr [eax + 0x8], ecx
        mov     dword ptr [eax], 0x77d13c
        jmp     store_1
null_1:
        xor     eax, eax
store_1:
        mov     ecx, dword ptr [esi + 0x538]
        test    ecx, ecx
        mov     dword ptr [esi + 0x534], eax
        jz      alloc_2
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]
alloc_2:
        push    0x14
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 0x4
        test    edi, edi
        jz      null_2
        lea     eax, [ebx + 0x384]
        push    eax
        mov     ecx, edi
        call    FUN_00416bc0
        mov     dword ptr [edi], 0x783f04
        jmp     store_2
null_2:
        xor     edi, edi
store_2:
        mov     ecx, dword ptr [esi + 0x53c]
        test    ecx, ecx
        mov     dword ptr [esi + 0x538], edi
        jz      alloc_3
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]
alloc_3:
        push    0x14
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 0x4
        test    edi, edi
        jz      null_3
        add     ebx, 0x370
        push    ebx
        mov     ecx, edi
        call    FUN_00416bc0
        mov     dword ptr [edi], 0x783ec4
        jmp     store_3
null_3:
        xor     edi, edi
store_3:
        mov     ecx, dword ptr [esi + 0xe0]
        mov     eax, dword ptr [ecx]
        push    0x0
        push    0x10
        mov     dword ptr [esi + 0x53c], edi
        call    dword ptr [eax + 0x4]
        pop     edi
        pop     esi
        pop     ebx
        ret     0x4
    }
}
