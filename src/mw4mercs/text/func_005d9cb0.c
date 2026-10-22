/*
 * FUN_005d9cb0 (162 B) — __thiscall, RET 4. Inserts a node (param) into a
 * doubly-linked list sorted by the double at offset +4. this->[0x10] is
 * the list head.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_005d9cb0(void)
{
    
__asm {
mov     edx, dword ptr [esp + 0x4]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x10]
        test    ecx, ecx
        mov     dword ptr [edx + 0x24], 0
        mov     dword ptr [edx + 0x20], 0
        jnz     L_9cd3
        mov     dword ptr [esi + 0x10], edx
        pop     esi
        ret     0x4
L_9cd3:
        fld     qword ptr [ecx + 0x4]
        fcomp   qword ptr [edx + 0x4]
        fnstsw ax
        test    ah, 0x41
        jnz     L_9d0e
        mov     al, byte ptr [ecx + 0x1d]
        test    al, al
        jz      L_9d01
        mov     eax, dword ptr [ecx + 0x20]
        mov     dword ptr [edx + 0x20], eax
        mov     eax, dword ptr [ecx + 0x20]
        test    eax, eax
        jz      L_9cf7
        mov     dword ptr [eax + 0x24], edx
L_9cf7:
        mov     dword ptr [edx + 0x24], ecx
        mov     dword ptr [ecx + 0x20], edx
        pop     esi
        ret     0x4
L_9d01:
        mov     dword ptr [esi + 0x10], edx
        mov     dword ptr [ecx + 0x24], edx
        mov     dword ptr [edx + 0x20], ecx
        pop     esi
        ret     0x4
L_9d0e:
        mov     esi, dword ptr [ecx + 0x20]
        test    esi, esi
        jz      L_9d2b
L_9d15:
        fld     qword ptr [ecx + 0x4]
        fcomp   qword ptr [edx + 0x4]
        fnstsw ax
        test    ah, 0x41
        jz      L_9d35
        mov     ecx, esi
        mov     esi, dword ptr [ecx + 0x20]
        test    esi, esi
        jnz     L_9d15
L_9d2b:
        mov     dword ptr [ecx + 0x20], edx
        mov     dword ptr [edx + 0x24], ecx
        pop     esi
        ret     0x4
L_9d35:
        mov     eax, dword ptr [ecx + 0x24]
        mov     dword ptr [edx + 0x24], eax
        mov     eax, dword ptr [ecx + 0x24]
        mov     esi, dword ptr [eax + 0x20]
        test    esi, esi
        jz      L_9d48
        mov     dword ptr [eax + 0x20], edx
L_9d48:
        mov     dword ptr [edx + 0x20], ecx
        mov     dword ptr [ecx + 0x24], edx
        pop     esi
        ret     0x4
    }


}
