/* Auto-generated inline asm transcription for FUN_00566ef0 */
#include <windows.h>

__declspec(naked) void FUN_00566ef0(int param_1, void *param_2, char param_3)
{
    

extern void __cdecl FUN_100566c81(void);
extern void __cdecl FUN_100566c51(void);
extern void __cdecl FUN_0064e5c7(void);
extern void __cdecl FUN_0064e4f7(void);
extern void __cdecl FUN_0064e0aa(void);
extern void __cdecl FUN_0064e09d(void);
extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_1004fcaa3(void);
extern int DAT_007f268c;
extern void __cdecl FUN_10041518b(void);
extern void __cdecl FUN_1004083b7(void);
extern void __cdecl FUN_100408372(void);
extern void __cdecl FUN_0064df66(void);
__asm {
sub     esp, 0xc
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x20]
        test    edi, 0xf00000
        jz      L_call_thunk
        mov     eax, dword ptr [esp + 0x28]
        mov     ecx, dword ptr [esp + 0x24]
        push    eax
        push    ecx
        add     edi, 0xff100000
        push    edi
        call FUN_100566c81
        add     esp, 0xc
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret
L_call_thunk:
        call FUN_100566c51
        mov     esi, eax
        push    edi
        mov     ecx, esi
        call FUN_0064e5c7
        test    al, al
        jz      L_exit
        push    edi
        mov     ecx, esi
        call FUN_0064e4f7
        mov     ebp, eax
        mov     ecx, ebp
        mov     dword ptr [esp + 0x18], ebp
        call FUN_0064e0aa
        mov     ebx, dword ptr [eax]
        mov     ecx, ebp
        mov     dword ptr [esp + 0x20], ebx
        call FUN_0064e09d
        cmp     ebx, dword ptr [eax + 0x4]
        jz      L_exit
L_loop:
        mov edx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [edx]
        mov edi, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [ebx]
        xor     eax, edi
        push    ecx
        mov     ecx, dword ptr [eax + 0x10]
        xor     ecx, 0x85739531
        call FUN_1004fcaa3
        mov     esi, eax
        test    esi, esi
        jz      L_loop_next
        mov eax, dword ptr [DAT_007f268c]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call FUN_10041518b
        cmp     al, 0x1
        jnz     L_loop_next
        cmp     byte ptr [esp + 0x28], 0x1
        jz      L_store
        mov     edx, dword ptr [esi + 0x10]
        shr     edx, 0x13
        test    dl, 0x1
        jnz     L_loop_next
L_store:
        mov     eax, dword ptr [esp + 0x24]
        mov     edi, dword ptr [eax + 0x4]
        cmp     edi, dword ptr [eax + 0x8]
        jz      L_grow
        test    edi, edi
        jz      L_store2
        mov     dword ptr [edi], esi
L_store2:
        add     edi, 0x4
        mov     dword ptr [eax + 0x4], edi
        jmp     L_loop_next
L_grow:
        mov     ebp, dword ptr [eax]
        mov     eax, edi
        sub     eax, ebp
        sar     eax, 0x2
        cmp     eax, 0x1
        mov     dword ptr [esp + 0x10], 0x1
        mov     dword ptr [esp + 0x14], eax
        lea     ecx, [esp + 0x10]
        jc      L_grow_sel
        lea     ecx, [esp + 0x14]
L_grow_sel:
        mov     ecx, dword ptr [ecx]
        add     ecx, eax
        mov     dword ptr [esp + 0x14], ecx
        jz      L_grow_zero
        lea     eax, [ecx*0x4]
        push    eax
        call FUN_1004083b7
        add     esp, 0x4
        mov     ebx, eax
        jmp     L_grow_copy
L_grow_zero:
        xor     ebx, ebx
L_grow_copy:
        cmp     ebp, edi
        mov     eax, ebx
        jz      L_grow_append
        mov     ecx, ebp
L_grow_loop:
        test    eax, eax
        jz      L_grow_loop2
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
L_grow_loop2:
        add     ecx, 0x4
        add     eax, 0x4
        cmp     ecx, edi
        jnz     L_grow_loop
L_grow_append:
        test    eax, eax
        jz      L_grow_append2
        mov     dword ptr [eax], esi
L_grow_append2:
        cmp     edi, edi
        lea     esi, [eax + 0x4]
        jz      L_grow_free
        mov     eax, edi
        sub     eax, esi
L_grow_shift:
        test    esi, esi
        jz      L_grow_shift2
        mov     ecx, dword ptr [eax + esi]
        mov     dword ptr [esi], ecx
L_grow_shift2:
        add     esi, 0x4
        lea     edx, [eax + esi]
        cmp     edx, edi
        jnz     L_grow_shift
L_grow_free:
        test    ebp, ebp
        mov     dword ptr [esp + 0x10], ebp
        jz      L_grow_update
        push    ebp
        call FUN_100408372
        add     esp, 0x4
L_grow_update:
        mov     eax, dword ptr [esp + 0x24]
        mov     ecx, dword ptr [esp + 0x14]
        mov     ebp, dword ptr [esp + 0x18]
        lea     edx, [ebx + ecx*0x4]
        mov     dword ptr [eax], ebx
        mov     ebx, dword ptr [esp + 0x20]
        mov     dword ptr [eax + 0x4], esi
        mov     dword ptr [eax + 0x8], edx
L_loop_next:
        add     ebx, 0x4
        mov     ecx, ebp
        mov     dword ptr [esp + 0x20], ebx
        call FUN_0064df66
        cmp     ebx, dword ptr [eax + 0x4]
        jnz     L_loop
L_exit:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret
    }


}
