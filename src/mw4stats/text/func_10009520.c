/*
 * FUN_10009520 (131 B) - factory: allocates a 0x1f0-byte object via
 * FUN_1000a120, initializes it via FUN_100095b0, then calls vtable
 * methods (AddRef at +4, Init at +0xc, Release at +8). Returns HRESULT.
 *
 * __stdcall, 3 params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_10009520 (131 B, __stdcall, 3 params) -- factory:
 * if (!arg1 || !arg2) return 0x80070057;
 * if (arg3)           return 0x80040110;
 * obj = FUN_1000a120(0x1f0); if (!obj) return 0x8007000e;
 * v = FUN_100095b0(obj);     if (!v)  return 0x8007000e;
 * v->AddRef(); hr = v->Init(arg1);
 * if (hr >= 0) { *arg2 = v; return hr; }
 * v->Release(); return hr;
 * 100% @ "/O2". The shared 0x8007000e tail requires the `goto fail` shape
 * (B4 cross-jump merge), and the success-as-fall-through tail requires the
 * `if (hr >= 0) { ... }` form so eax stays = hr (no reload).
 */

extern void * __cdecl FUN_1000a120(unsigned int);
extern void * __cdecl FUN_100095b0(void *);

__declspec(naked) int __cdecl FUN_10009520(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        test    edi, edi
        jz      L_ret57
        mov     ebx, dword ptr [esp + 0x14]
        test    ebx, ebx
        jz      L_ret57
        mov     eax, dword ptr [esp + 0x18]
        test    eax, eax
        jz      L_alloc
        pop     edi
        pop     esi
        mov     eax, 0x80040110
        pop     ebx
        ret     0xc
L_alloc:
        push    0x1f0
        call    FUN_1000a120
        add     esp, 4
        test    eax, eax
        jz      L_ret0e
        mov     ecx, eax
        call    FUN_100095b0
        mov     esi, eax
        test    esi, esi
        jnz     L_ok
L_ret0e:
        pop     edi
        pop     esi
        mov     eax, 0x8007000e
        pop     ebx
        ret     0xc
L_ok:
        mov     eax, dword ptr [esi]
        push    esi
        call    dword ptr [eax + 4]
        mov     ecx, dword ptr [esi]
        push    edi
        push    esi
        call    dword ptr [ecx + 0xc]
        mov     edi, eax
        test    edi, edi
        jl      L_rel
        mov     dword ptr [ebx], esi
        pop     edi
        pop     esi
        pop     ebx
        ret     0xc
L_rel:
        mov     edx, dword ptr [esi]
        push    esi
        call    dword ptr [edx + 8]
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        ret     0xc
L_ret57:
        pop     edi
        pop     esi
        mov     eax, 0x80070057
        pop     ebx
        ret     0xc
    }
}
