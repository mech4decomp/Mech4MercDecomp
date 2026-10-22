/*
 * FUN_005bd0d0 (330 B) — __thiscall constructor (ECX = this, returns this).
 *   Calls FUN_004d6040, initializes a sub-object at this+0x4b0 via
 *   FUN_00416990, zeroes a large array at this+0xb4 (256 entries), and
 *   allocates a buffer via FUN_004084d0 + FUN_0067ec30.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004d6040(void *p);
extern void __fastcall FUN_00416990(void *this, int a, int b);
extern void *__cdecl FUN_004084d0(int n);
extern void __fastcall FUN_0067ec30(void *this);

__declspec(naked) void *__fastcall FUN_005bd0d0(void *this)
{
    

extern int DAT_007f2294;
__asm {
mov eax, dword ptr [DAT_007f2294]
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_004d6040
        xor     ebx, ebx
        mov     dword ptr [esi + 0x98], ebx
        mov     dword ptr [esi + 0x94], ebx
        push    ebx
        lea     edi, [esi + 0x4b0]
        mov     dword ptr [esi + 0xa0], ebx
        mov     dword ptr [esi + 0x9c], ebx
        push    ebx
        mov     ecx, edi
        mov     dword ptr [esi + 0xac], ebx
        mov     dword ptr [esi + 0xa8], ebx
        call    FUN_00416990
        mov     dword ptr [edi], 0x787198
        mov     dword ptr [esi + 0x4c4], ebx
        mov     dword ptr [esi + 0x4c8], ebx
        mov     dword ptr [esi + 0x4cc], ebx
        mov     dword ptr [esi + 0x4d0], ebx
        mov     dword ptr [esi + 0x4d4], ebx
        mov     dword ptr [esi + 0x4d8], ebx
        mov     dword ptr [esi + 0x4dc], ebx
        mov     dword ptr [esi + 0x4e0], ebx
        mov     dword ptr [esi + 0x4e4], ebx
        mov     dword ptr [esi + 0x4e8], ebx
        mov     dword ptr [esi + 0x4ec], ebx
        mov     eax, 0x100
        mov     dword ptr [esi + 0x4f0], ebx
        mov     dword ptr [esi + 0x4f4], ebx
        mov     dword ptr [esi + 0x4f8], ebx
        mov     dword ptr [esi + 0x4fc], ebx
        mov     dword ptr [esi + 0x504], ebx
        mov     dword ptr [esi + 0x50c], ebx
        mov     dword ptr [esi + 0x514], ebx
        mov     dword ptr [esi + 0x51c], ebx
        mov     dword ptr [esi + 0x528], eax
        mov     dword ptr [esi + 0x52c], eax
        mov     dword ptr [esi + 0x500], ebx
        mov     dword ptr [esi], 0x787150
        mov     byte ptr [esi + 0xb0], bl
        mov     dword ptr [esi + 0x508], ebx
        mov     dword ptr [esi + 0x510], ebx
        mov     dword ptr [esi + 0x518], ebx
        mov     dword ptr [esi + 0x520], ebx
        mov     dword ptr [esi + 0x524], 0x7c
        lea     eax, [esi + 0xb4]
        mov     ecx, 0xff
    l_loop:
        mov     dword ptr [eax + 0x47c], ebx
        mov     dword ptr [eax], ebx
        add     eax, 4
        dec     ecx
        jnz     l_loop
        push    0x28
        mov     dword ptr [esi + 0x92c], ebx
        mov     dword ptr [esi + 0x930], ebx
        mov     dword ptr [esi + 0xa4], ebx
        call    FUN_004084d0
        add     esp, 4
        mov     ecx, eax
        mov     dword ptr [esi + 0x90], eax
        call    FUN_0067ec30
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        ret
    }


}
