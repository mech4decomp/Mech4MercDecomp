/*
 * FUN_0072D1F0 (138 B) — __stdcall, RET 4 (one stack param).
 *
 * Queries an engine object via FUN_0072d280, walks its vtable to
 * register/update a global (DAT_008816f0), and releases it.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __stdcall FUN_0072d280(void *p);
extern int g_8816f0;          /* DAT_008816f0 */

__declspec(naked) void __stdcall FUN_0072d1f0(void *param)
{
    __asm {
        sub     esp, 0x8
        __emit 0x8D  /* __emit: lea eax,[esp+0] - MSVC6 drops the 00 disp byte (8D 04 24) */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        push    eax
        mov     dword ptr [esp + 0x4], 0x0
        call    FUN_0072d280
        test    eax, eax
        jl      L_274
        __emit 0x8B  /* __emit: mov eax,[esp+0] - MSVC6 drops the 00 disp byte (8B 04 24) */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        test    eax, eax
        jz      L_274
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x4]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x2c]
        test    eax, eax
        jl      L_274
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        jz      L_24d
        mov     ecx, dword ptr [g_8816f0]
        test    ecx, ecx
        jz      L_26a
        __emit 0x8B  /* __emit: mov eax,[esp+0] - MSVC6 drops the 00 disp byte (8B 04 24) */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        mov     edx, dword ptr [eax]
        push    ecx
        push    eax
        call    dword ptr [edx + 0x28]
        __emit 0x8B  /* __emit: mov eax,[esp+0] - MSVC6 drops the 00 disp byte (8B 04 24) */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        mov     edx, dword ptr [eax]
        push    eax
        call    dword ptr [edx + 0x8]
        add     esp, 0x8
        ret     0x4
L_24d:
        mov     eax, dword ptr [esp + 0x4]
        test    al, 0x8
        jnz     L_25a
        mov     dword ptr [g_8816f0], eax
L_25a:
        test    al, 0x1
        jz      L_26a
        __emit 0x8B  /* __emit: mov eax,[esp+0] - MSVC6 drops the 00 disp byte (8B 04 24) */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        mov     ecx, dword ptr [eax]
        push    0x8
        push    eax
        call    dword ptr [ecx + 0x28]
L_26a:
        __emit 0x8B  /* __emit: mov eax,[esp+0] - MSVC6 drops the 00 disp byte (8B 04 24) */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        mov     edx, dword ptr [eax]
        push    eax
        call    dword ptr [edx + 0x8]
L_274:
        add     esp, 0x8
        ret     0x4
    }
}
