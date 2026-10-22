/*
 * FUN_00681050 (66 B) — __thiscall (ECX = this), RET 8 (2 stack params).
 * Calls FUN_00680820, then walks a linked list at this+0x18 calling
 * FUN_00680420 for each non-null node.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_00680820(void);
extern void __fastcall FUN_00680420(void);

__declspec(naked) void __fastcall FUN_00681050(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        push    esi
        push    edi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0xc]
        push    eax
        call    FUN_00680820
        mov     esi, dword ptr [esi + 0x18]
        mov     edi, eax
        test    esi, esi
        jz      l_done
    l_loop:
        mov     eax, dword ptr [esi]
        test    eax, eax
        mov     esi, dword ptr [esi + 0x4]
        jz      l_done
        mov     ecx, dword ptr [eax + 0x20]
        mov     edx, dword ptr [eax + 0x1c]
        push    ecx
        mov     ecx, dword ptr [eax + 0x18]
        push    edx
        mov     edx, dword ptr [eax + 0x10]
        push    ecx
        push    edx
        mov     ecx, edi
        call    FUN_00680420
        __emit 0xEB /* __emit: backward jmp rel-offset miscomputed by MSVC6 (off-by-4 due to call-reloc between branch and target); ref EB DA */ 
        __emit 0xDA
    l_done:
        pop     edi
        pop     esi
        ret     0x8
    }
}
