/*
 * FUN_005d7a80 (198 B) — Decrement refcount at [this+0x44]; when it hits
 * zero, tear down the object graph at [this+0x38] (free a linked list of
 * 0xc-byte nodes, free a 4-slot array, free the container) and null it.
 *
 * __fastcall (ECX = this), no stack params, RET 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_005d7a80(void *param)
{
    

/* extern data/function symbols for __emit replacements */
extern void __cdecl FUN_005DA9B0(void);
extern void __cdecl FUN_10040849f(void);
extern void __cdecl FUN_005d9e68(void);
extern void __cdecl FUN_005d9e5a(void);
extern void __cdecl FUN_005d9e4c(void);
extern void __cdecl FUN_005d9e3e(void);
extern void __cdecl FUN_100408448(void);
extern void __cdecl FUN_100408438(void);
__asm {
push    ecx
        mov     eax, dword ptr [ecx + 0x44]
        dec     eax
        __emit 0x89          // mov [esp+0], ecx — MSVC6 drops the 0 displacement (89 0C 24)
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        mov     dword ptr [ecx + 0x44], eax
        jnz     L7B44
        push    ebp
        mov     ebp, dword ptr [ecx + 0x38]
        test    ebp, ebp
        jz      L7B3C
        push    ebx
        mov     ebx, dword ptr [ebp + 0x400004]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x400008]
        mov     esi, ebx
        cmp     esi, edi
        jz      L7AC1
L7AB3:
        mov     ecx, esi
        call FUN_005DA9B0
        add     esi, 0xc
        cmp     esi, edi
        jnz     L7AB3
L7AC1:
        test    ebx, ebx
        jz      L7ACE
        push    ebx
        call FUN_10040849f
        add     esp, 0x4
L7ACE:
        mov     esi, dword ptr [ebp]
        test    esi, esi
        jz      L7B25
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        jz      L7AE2
        push    0x1
        call FUN_005d9e68
L7AE2:
        mov     ecx, dword ptr [esi + 0x4]
        test    ecx, ecx
        jz      L7AF0
        push    0x1
        call FUN_005d9e5a
L7AF0:
        mov     ecx, dword ptr [esi + 0x8]
        test    ecx, ecx
        jz      L7AFE
        push    0x1
        call FUN_005d9e4c
L7AFE:
        mov     ecx, dword ptr [esi + 0xc]
        test    ecx, ecx
        jz      L7B0C
        push    0x1
        call FUN_005d9e3e
L7B0C:
        xor     eax, eax
        push    esi
        mov     dword ptr [esi + 0xc], eax
        mov     dword ptr [esi + 0x8], eax
        mov     dword ptr [esi + 0x4], eax
        mov     dword ptr [esi], eax
        mov     dword ptr [esi + 0x24], eax
        call FUN_100408448
        add     esp, 0x4
L7B25:
        push    ebp
        mov     dword ptr [ebp], 0x0
        call FUN_100408438
        mov     ecx, dword ptr [esp + 0x14]
        add     esp, 0x4
        pop     edi
        pop     esi
        pop     ebx
L7B3C:
        mov     dword ptr [ecx + 0x38], 0x0
        pop     ebp
L7B44:
        pop     ecx
        ret
    }


}
