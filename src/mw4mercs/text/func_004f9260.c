/*
 * FUN_004f9260 (100 B) — MLR/Adept: guarded alloc/init path. Calls
 * FUN_006f4950 / FUN_004084d0, conditionally FUN_004ea0f0 +
 * FUN_004f92d0, then FUN_006f49a0 / FUN_00416a90 (this+0x19c).
 * __thiscall (ECX = this), RET 0x8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dc12c;

extern void __cdecl FUN_006f4950(void);
extern int __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004ea0f0(void);
extern int __cdecl FUN_004f92d0(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_00416a90(void);

__declspec(naked) void FUN_004f9260(void)
{
    __asm {
        mov     eax, dword ptr [g_007dc12c]
        push    ebx
        push    esi
        push    edi
        push    eax
        mov     ebx, ecx
        call    FUN_006f4950
        push    0x20
        call    FUN_004084d0
        mov     edi, dword ptr [esp+0x14]
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L92aa
        mov     edx, dword ptr [esp+0x14]
        mov     eax, dword ptr [edx]
        test    eax, eax
        push    ecx
        mov     ecx, esp
        mov     dword ptr [ecx], eax
        jz      L9296
        inc     byte ptr [eax-1]
L9296:
        push    ecx
        mov     ecx, esp
        push    edi
        call    FUN_004ea0f0
        mov     ecx, esi
        call    FUN_004f92d0
        mov     esi, eax
        jmp     L92ac
L92aa:
        xor     esi, esi
L92ac:
        call    FUN_006f49a0
        push    edi
        push    esi
        lea     ecx, [ebx+0x19c]
        call    FUN_00416a90
        pop     edi
        pop     esi
        pop     ebx
        ret     0x8
    }
}
