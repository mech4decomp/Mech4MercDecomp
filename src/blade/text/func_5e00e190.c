/*
 * FUN_5e00e190 (129 B) — __thiscall (ECX = this), RET 0x4 (1 stack arg).
 * Constructor-ish: calls FUN_5e00e160, releases this->m7c, zeroes
 * 0x1f dwords from this, then if arg != 0 sets up vtable and calls
 * vtable[0x58/4], then FUN_5e012cf0(this+0x48), stores result at
 * this->m84, and if old this->m80 != 0 calls FUN_5e00e120.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_5e00e160(void);
extern int  __fastcall FUN_5e00e120(void);
extern int  __stdcall  FUN_5e012cf0(void *p);

__declspec(naked) int __fastcall FUN_5e00e190(void *arg)
{
    __asm {
        push    ebp
        push    esi
        mov     esi, ecx
        push    edi
        mov     ebp, dword ptr [esi + 0x80]
        call    FUN_5e00e160
        mov     eax, dword ptr [esi + 0x7c]
        mov     dword ptr [esi + 0x84], 0
        test    eax, eax
        jz      L1BE
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0x8]
        mov     dword ptr [esi + 0x7c], 0
    L1BE:
        mov     ecx, 0x1f
        xor     eax, eax
        mov     edi, esi
        rep stosd
        mov     edi, dword ptr [esp + 0x10]
        test    edi, edi
        jz      L209
        mov     edx, dword ptr [edi]
        push    edi
        mov     dword ptr [esi], 0x7c
        call    dword ptr [edx + 0x4]
        mov     eax, dword ptr [edi]
        push    esi
        push    edi
        mov     dword ptr [esi + 0x7c], edi
        call    dword ptr [eax + 0x58]
        test    eax, eax
        jl      L20B
        lea     ecx, [esi + 0x48]
        push    ecx
        call    FUN_5e012cf0
        test    ebp, ebp
        mov     dword ptr [esi + 0x84], eax
        jz      L209
        mov     ecx, esi
        call    FUN_5e00e120
        test    eax, eax
        jl      L20B
    L209:
        xor     eax, eax
    L20B:
        pop     edi
        pop     esi
        pop     ebp
        ret     0x4
    }
}
