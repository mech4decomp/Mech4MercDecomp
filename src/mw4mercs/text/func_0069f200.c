/*
 * FUN_0069F200 (61 B) — __thiscall (ECX = this, one stack param, RET 0x4).
 *
 * Calls FUN_004125E0(*this, param) then FUN_00412740(result). If param
 * is non-null, decrements the byte before it and frees it via
 * FUN_004084E0 when it reaches zero. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004125e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void *__stdcall FUN_0069f200(void *param)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi]
        push    eax
        push    ecx
        lea     ecx, [esp + 0x10]
        call    FUN_004125e0
        push    eax
        mov     ecx, esi
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x8]
        test    eax, eax
        jz      l_done
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_done
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    l_done:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
