/*
 * FUN_006f14d0 (376 B) — Constructor.
 *
 * __fastcall (ECX = this). Initializes 12 sub-objects at this+0x8..0x60
 * via FUN_0041fc80 and stores vtable ptr 0x79f670 (last one 0x783eac),
 * zeroes bytes at this+0x68/69/6a, runs FUN_006f3930 on 11 sub-objects
 * (this+0x6c..0x120), then FUN_006f3960 on this+0x6c and this+0xe4.
 * Returns this in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041fc80(void);
extern void __cdecl FUN_006f3930(void);
extern void __cdecl FUN_006f3960(void);

__declspec(naked) void * __fastcall FUN_006f14d0(void *this)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        push    edi
        lea     edi, [esi + 8]
        xor     ebx, ebx
        push    ebx
        mov     ecx, edi
        call    FUN_0041fc80
        mov     dword ptr [edi], 0x79F670
        lea     edi, [esi + 0x10]
        push    ebx
        mov     ecx, edi
        call    FUN_0041fc80
        mov     dword ptr [edi], 0x79F670
        lea     edi, [esi + 0x18]
        push    ebx
        mov     ecx, edi
        call    FUN_0041fc80
        mov     dword ptr [edi], 0x79F670
        lea     edi, [esi + 0x20]
        push    ebx
        mov     ecx, edi
        call    FUN_0041fc80
        mov     dword ptr [edi], 0x79F670
        lea     edi, [esi + 0x28]
        push    ebx
        mov     ecx, edi
        call    FUN_0041fc80
        mov     dword ptr [edi], 0x79F670
        lea     edi, [esi + 0x30]
        push    ebx
        mov     ecx, edi
        call    FUN_0041fc80
        mov     dword ptr [edi], 0x79F670
        lea     edi, [esi + 0x38]
        push    ebx
        mov     ecx, edi
        call    FUN_0041fc80
        mov     dword ptr [edi], 0x79F670
        lea     edi, [esi + 0x40]
        push    ebx
        mov     ecx, edi
        call    FUN_0041fc80
        mov     dword ptr [edi], 0x79F670
        lea     edi, [esi + 0x48]
        push    ebx
        mov     ecx, edi
        call    FUN_0041fc80
        mov     dword ptr [edi], 0x79F670
        lea     edi, [esi + 0x50]
        push    ebx
        mov     ecx, edi
        call    FUN_0041fc80
        mov     dword ptr [edi], 0x79F670
        lea     edi, [esi + 0x58]
        push    ebx
        mov     ecx, edi
        call    FUN_0041fc80
        mov     dword ptr [edi], 0x79F670
        lea     edi, [esi + 0x60]
        push    ebx
        mov     ecx, edi
        call    FUN_0041fc80
        mov     dword ptr [edi], 0x783EAC
        lea     edi, [esi + 0x6C]
        mov     ecx, edi
        mov     byte ptr [esi + 0x68], bl
        mov     byte ptr [esi + 0x69], bl
        mov     byte ptr [esi + 0x6A], bl
        call    FUN_006f3930
        lea     ecx, [esi + 0x80]
        call    FUN_006f3930
        lea     ecx, [esi + 0x94]
        call    FUN_006f3930
        lea     ecx, [esi + 0xA8]
        call    FUN_006f3930
        lea     ecx, [esi + 0xBC]
        call    FUN_006f3930
        lea     ecx, [esi + 0xD0]
        call    FUN_006f3930
        lea     ebp, [esi + 0xE4]
        mov     ecx, ebp
        call    FUN_006f3930
        lea     ecx, [esi + 0xF8]
        call    FUN_006f3930
        lea     ecx, [esi + 0x10C]
        call    FUN_006f3930
        lea     ecx, [esi + 0x120]
        call    FUN_006f3930
        push    0x40340000
        push    ebx
        mov     ecx, edi
        mov     dword ptr [esi + 0x134], ebx
        mov     dword ptr [esi], 2
        mov     dword ptr [esi + 4], ebx
        call    FUN_006f3960
        push    ebx
        push    ebx
        mov     ecx, ebp
        call    FUN_006f3960
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    }
}
