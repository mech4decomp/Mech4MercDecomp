/*
 * FUN_005f94f0 (100 B) — __fastcall. Enables a render/weapon object: ORs
 * 0xc0 into a flags field, calls two virtual methods, and sets a 0x80 flag
 * on two linked sub-objects (this+0x124 / this+0x128).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_005f94f0(void)
{
    __asm {
        push    edi
        mov     edi, dword ptr [ecx+0x340]
        test    edi, edi
        jz      L_9552
        push    esi
        mov     esi, dword ptr [edi+0xd8]
        or      dword ptr [esi+0x18], 0xc0
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax+0x10]
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx+0x14]
        mov     eax, dword ptr [edi+0x124]
        test    eax, eax
        mov     cl, 0x80
        pop     esi
        jz      L_9536
        mov     dl, byte ptr [eax+0x9c]
        __emit 0x84               /* test cl,dl: MSVC6 swaps reg8 operand order */
        __emit 0xD1
        jnz     L_9536
        or      dl, cl
        mov     byte ptr [eax+0x9c], dl
L_9536:
        mov     edi, dword ptr [edi+0x128]
        test    edi, edi
        jz      L_9552
        mov     al, byte ptr [edi+0x9c]
        __emit 0x84               /* test cl,al: MSVC6 swaps reg8 operand order */
        __emit 0xC1
        jnz     L_9552
        or      al, cl
        mov     byte ptr [edi+0x9c], al
L_9552:
        pop     edi
        ret
    }
}
