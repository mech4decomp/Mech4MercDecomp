/*
 * FUN_0049b390 (324 B) — MLR particle/flare object teardown (__fastcall).
 * Decrements light refcounts, frees four light lists, tears down sub-objects.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040d9b0(void);
extern void __cdecl FUN_0049d210(void);
extern void __cdecl FUN_00423b20(void);
extern void __cdecl FUN_0049d200(void);
extern void __cdecl FUN_0049a500(void);
extern void __cdecl FUN_0049b4e0(void);
extern void __cdecl FUN_004937f0(void);

__declspec(naked) void FUN_0049b390(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x770230
        mov     eax, dword ptr [esi + 0x174]
        test    eax, eax
        push    edi
        jle     short loc_49b3cb
        mov     edi, dword ptr [esi + 0x170]
        mov     ebx, eax
loc_49b3ae:
        mov     ecx, dword ptr [edi]
        dec     word ptr [ecx + 0x10]
        cmp     word ptr [ecx + 0x10], 0x0
        jnz     short loc_49b3c5
        test    ecx, ecx
        jz      short loc_49b3c5
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
loc_49b3c5:
        add     edi, 0x4
        dec     ebx
        jnz     short loc_49b3ae
loc_49b3cb:
        mov     eax, dword ptr [esi + 0x174]
        test    eax, eax
        lea     ebp, [esi + 0x170]
        jz      short loc_49b3f5
        mov     ecx, dword ptr [ebp]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [ebp], 0x0
        mov     dword ptr [ebp + 0x4], 0x0
loc_49b3f5:
        mov     eax, dword ptr [esi + 0x17c]
        test    eax, eax
        lea     ebx, [esi + 0x178]
        jz      short loc_49b41d
        mov     edx, dword ptr [ebx]
        push    edx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [ebx], 0x0
        mov     dword ptr [ebx + 0x4], 0x0
loc_49b41d:
        mov     eax, dword ptr [esi + 0x184]
        test    eax, eax
        lea     edi, [esi + 0x180]
        jz      short loc_49b445
        mov     eax, dword ptr [edi]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [edi], 0x0
        mov     dword ptr [edi + 0x4], 0x0
loc_49b445:
        mov     eax, dword ptr [esi + 0x18c]
        test    eax, eax
        jz      short loc_49b46c
        mov     ecx, dword ptr [esi + 0x188]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        xor     eax, eax
        mov     dword ptr [esi + 0x188], eax
        mov     dword ptr [esi + 0x18c], eax
loc_49b46c:
        lea     ecx, [esi + 0x190]
        call    FUN_0040d9b0
        mov     eax, dword ptr [esi + 0x188]
        test    eax, eax
        jz      short loc_49b48a
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
loc_49b48a:
        mov     ecx, edi
        call    FUN_0049d210
        mov     ecx, ebx
        call    FUN_00423b20
        mov     ecx, ebp
        call    FUN_0049d200
        lea     ecx, [esi + 0x130]
        call    FUN_0049a500
        lea     ecx, [esi + 0x108]
        call    FUN_0049b4e0
        lea     ecx, [esi + 0xa4]
        call    FUN_0049a500
        lea     ecx, [esi + 0x7c]
        call    FUN_0049b4e0
        mov     ecx, esi
        call    FUN_004937f0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    }
}
