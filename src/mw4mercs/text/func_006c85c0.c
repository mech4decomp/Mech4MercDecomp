/*
 * FUN_006C85C0 (51 B) — __stdcall, 5 params.
 *
 * If param_1 is non-null AND param_1[1]==param_1[4] AND param_1[0]==param_1[3],
 * returns without calling. Otherwise calls FUN_006C8F30(param_1..param_5).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006c8f30(void);

__declspec(naked) void __stdcall FUN_006c85c0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        test    eax, eax
        jz      do_call
        mov     ecx, dword ptr [eax + 4]
        cmp     ecx, dword ptr [eax + 0x10]
        jz      done
        mov     edx, dword ptr [eax]
        cmp     edx, dword ptr [eax + 0xc]
        jz      done
do_call:
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x10]
        push    ecx
        mov     ecx, dword ptr [esp + 0x10]
        push    edx
        push    ecx
        mov     ecx, dword ptr [esp + 0x14]
        push    eax
        call    FUN_006c8f30
done:
        ret     0x14
    }
}
