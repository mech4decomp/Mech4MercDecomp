/*
 * FUN_00423d90 (82 B) — __thiscall, RET 0x4. Reallocates a dynamic
 * array: object at ECX has [0]=data ptr, [4]=count. If new count
 * differs, frees old data, allocates new (count*4) buffer, or frees
 * and nulls when count==0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *p);
extern void *__cdecl FUN_004084d0(int size);

__declspec(naked) void FUN_00423d90(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi+4]
        push    edi
        mov     edi, dword ptr [esp+0xc]
        cmp     edi, eax
        jz      L_dd
        test    edi, edi
        jbe     L_cc
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_b2
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_b2:
        /* __emit: no-base SIB form lea eax,[edi*4+0] (8D 04 BD) not
           encodable natively in MSVC6 inline asm */
        __emit 0x8D
        __emit 0x04
        __emit 0xBD
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        push    eax
        mov     dword ptr [esi+4], edi
        call    FUN_004084d0
        add     esp, 4
        pop     edi
        mov     dword ptr [esi], eax
        pop     esi
        ret     4
L_cc:
        mov     ecx, dword ptr [esi]
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi], 0
L_dd:
        pop     edi
        pop     esi
        ret     4
    }
}
