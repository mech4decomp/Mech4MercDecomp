/*
 * FUN_005DDF60 (114 B) — __thiscall (this in ECX), RET 0x4 (1 stack arg).
 * LancemateManager constructor. Calls FUN_004D5B10, sets vtable
 * 0x00788634, calls a virtual method (offset +0x20) on the param, then
 * fills a child list (ESI = this+0x10) by allocating 0x74-byte items via
 * FUN_005DE210 and appending via FUN_004179B0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void * __cdecl FUN_004084d0(unsigned int);
extern void * __cdecl FUN_005de210(void *);
extern void __cdecl FUN_004179b0(void *);
extern void __cdecl FUN_004d5b10(void *);

__declspec(naked) void __fastcall FUN_005ddf60(void)
{
    
__asm {
push    ecx
        /* __emit: MSVC6 encodes mov eax,[imm32] as B8 immediate load, not A1 memory deref */
        _emit   0xA1
        _emit   0x1C
        _emit   0x25
        _emit   0x7F
        _emit   0x00
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        push    eax
        call    FUN_004d5b10
        mov     ebp, dword ptr [esp + 0x18]
        mov     edx, dword ptr [ebp]
        lea     esi, [edi + 0x10]
        xor     ebx, ebx
        push    0x4
        lea     eax, [esp + 0x14]
        mov     dword ptr [esi], ebx
        push    eax
        mov     ecx, ebp
        mov     dword ptr [esi + 0x4], ebx
        mov     dword ptr [edi], 0x788634
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jle     LDFC8
LDF9D:
        push    0x74
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      LDFB5
        push    ebp
        mov     ecx, eax
        call    FUN_005de210
        jmp     LDFB7
LDFB5:
        xor     eax, eax
LDFB7:
        push    eax
        mov     ecx, esi
        call    FUN_004179b0
        mov     eax, dword ptr [esp + 0x10]
        inc     ebx
        cmp     ebx, eax
        jl      LDF9D
LDFC8:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x4
    }


}
