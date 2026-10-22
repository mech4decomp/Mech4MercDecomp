/*
 * FUN_004e0820 (213 B) — __thiscall, RET 0x4 (1 arg). Registers an event
 * object (arg) into a queue structure; walks a linked list comparing
 * double fields, and dispatches via FUN_004179b0 / FUN_00417b00.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004179b0(void);
extern void __cdecl FUN_00417b00(void);

__declspec(naked) void FUN_004e0820(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 0x10
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x8]
        mov     edx, dword ptr [edi + 0x10]
        test    edx, edx
        mov     eax, dword ptr [edi + 0x18]
        mov     eax, dword ptr [eax + 0x8]
        jnz     L_main
        cmp     dword ptr [edi + 0x14], 0xbff00000
        jnz     L_main
        lea     edx, [eax + eax*4]
        push    edi
        lea     ecx, [ecx + edx*8 + 0x14]
        call    FUN_004179b0
        pop     edi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x4
L_main:
        lea     eax, [eax + eax*4]
        mov     edx, dword ptr [ecx + eax*8 + 0x1c]
        lea     ecx, [ecx + eax*8 + 0x1c]
        mov     dword ptr [esp + 0x14], edx
        mov     dword ptr [esp + 0x10], ecx
        mov     dword ptr [esp + 0xc], 0x773ae0
        mov     edx, dword ptr [ecx + 0x4]
        test    edx, edx
        mov     dword ptr [esp + 0x14], edx
        jz      L_done
        mov     eax, dword ptr [edx]
        test    eax, eax
        jz      L_done
        fld     qword ptr [eax + 0x10]
        fcomp   qword ptr [edi + 0x10]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_done
L_walk:
        mov     edx, dword ptr [edx + 0x8]
        test    edx, edx
        mov     dword ptr [esp + 0x14], edx
        jz      L_dispatch
        mov     esi, dword ptr [edx]
        test    esi, esi
        jz      L_dispatch
        fld     qword ptr [esi + 0x10]
        fcomp   qword ptr [edi + 0x10]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_second
        jmp     L_walk
L_dispatch:
        mov     eax, dword ptr [ecx]
        push    edi
        lea     ecx, [esp + 0x10]
        mov     dword ptr [esp + 0x18], eax
        call    FUN_00417b00
        pop     edi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x4
L_second:
        test    esi, esi
        jz      L_dispatch2
        mov     ecx, dword ptr [edx + 0x4]
        mov     dword ptr [esp + 0x14], ecx
L_dispatch2:
        push    edi
        lea     ecx, [esp + 0x10]
        call    FUN_00417b00
        pop     edi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x4
L_done:
        push    edi
        call    FUN_004179b0
        pop     edi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
