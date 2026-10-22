/*
 * FUN_006256b0 (182 B) — __fastcall constructor, RET.
 *
 * Initializes an object: calls FUN_00561430, FUN_00626500, allocates
 * two buffers via FUN_004084d0, sets vtable 0x78CFE8, and invokes a
 * virtual method.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int DAT_007ddde0;                    /* 0x007DDDE0 */
extern int DAT_0078cfe8;                    /* 0x0078CFE8 - vtable pointer */
extern void __cdecl FUN_00561430(void);
extern void __cdecl FUN_00626500(void);
extern void* __stdcall FUN_004084d0(int size);
extern void __cdecl FUN_00560190(void);

__declspec(naked) void __fastcall FUN_006256b0(void *this)
{
    __asm {
        sub     esp, 0x8
        mov     eax, dword ptr [DAT_007ddde0]
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00561430
        lea     ecx, [esp + 0x10]
        push    ecx
        lea     edx, [esp + 0x13]
        lea     edi, [esi + 0x50]
        xor     ebx, ebx
        push    edx
        mov     ecx, edi
        mov     dword ptr [esp + 0x18], ebx
        call    FUN_00626500
        push    0x20
        call    FUN_004084d0
        mov     dword ptr [edi], eax
        mov     dword ptr [eax], eax
        mov     dword ptr [esi], offset DAT_0078cfe8
        push    0x138
        mov     dword ptr [eax + 0x04], eax
        mov     dword ptr [esi + 0x14], ebx
        mov     dword ptr [esi + 0x18], ebx
        mov     dword ptr [esi + 0x1c], 0x3f666666
        mov     dword ptr [esi + 0x34], 0xfa007d00
        mov     dword ptr [esi + 0x5c], ebx
        call    FUN_004084d0
        add     esp, 0x8
        cmp     eax, ebx
        jz      l_null
        push    ebx
        mov     ecx, eax
        call    FUN_00560190
        jmp     l_cont
    l_null:
        xor     eax, eax
    l_cont:
        mov     dword ptr [eax + 0x104], 0xffffffff
        mov     dword ptr [eax + 0x10c], ebx
        mov     byte ptr [eax + 0x110], 0x1
        mov     edx, dword ptr [eax]
        push    ebx
        mov     ecx, eax
        mov     dword ptr [esi + 0x58], eax
        call    dword ptr [edx + 0x04]
        mov     dword ptr [esi + 0x60], ebx
        pop     edi
        mov     dword ptr [esi + 0x64], ebx
        mov     dword ptr [esi + 0x68], ebx
        mov     byte ptr [esi + 0x6d], bl
        mov     byte ptr [esi + 0x6e], bl
        mov     dword ptr [esi + 0x70], ebx
        mov     byte ptr [esi + 0x6c], 0x1
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 0x8
        ret
    }
}
