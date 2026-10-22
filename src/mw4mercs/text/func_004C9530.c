/* FUN_004C9530 - 0x004C9530, size 10728 B (block 0x4C9523, fn at +0xD)
 * __stdcall ret 0x14. Massive string-table lookup dispatcher: reads a
 * two-level key (arg[esp+0x10]/[esp+0x14]) and, per case, pushes a string id
 * and invokes the vtable+0x34 string getter through the 0x7dab44/0x7dab40
 * obfuscated pointer pair (xor 0x85739531), then strlen+copy into 0x7dab48.
 * Two jump tables (0x4cbc50, 0x4cbcb0) dispatch 0..0x17 and 0x258..0x2f1.
 * A1-form cases inline the copy; ECX-form cases tail-jump to the shared
 * copy routine at 0x4cbc23. The special 0x2000 case sets [0x7dac74]=1.
 */
#include <windows.h>

extern int g_7dab44;   /* 0x007dab44 */
extern int g_7dab40;   /* 0x007dab40 */
extern int g_7dac74;   /* 0x007dac74 */

__declspec(naked) void func_004C9530(void)
{
    __asm {
        mov eax, dword ptr [esp + 0x10]
        test eax, eax
        push esi
        push edi
        jne L_004C9C0F
        mov eax, dword ptr [esp + 0x14]
        cmp eax, 0x1000
        jg L_004C9AA2
        je L_004C9A5B
        cmp eax, 0x17
        ja L_004C9B54
        ; jmp dword ptr [eax*4 + 0x4cbc50] (FF 24 85 50 BC 4C 00)
        __emit 0xff
        __emit 0x24
        __emit 0x85
        __emit 0x50
        __emit 0xbc
        __emit 0x4c
        __emit 0x00
L_004C9563:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x484
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004C95AA:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x485
        jmp L_shared_tail
L_004C95CD:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x486
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004C9614:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x487
        jmp L_shared_tail
L_004C9637:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x488
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004C967E:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x489
        jmp L_shared_tail
L_004C96A1:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x48a
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004C96E8:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x48b
        jmp L_shared_tail
L_004C970B:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x48c
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004C9752:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x48d
        jmp L_shared_tail
L_004C9775:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x48e
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004C97BC:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x48f
        jmp L_shared_tail
L_004C97DF:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x490
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004C9826:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x491
        jmp L_shared_tail
L_004C9849:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x492
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004C9890:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x493
        jmp L_shared_tail
L_004C98B3:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x494
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004C98FA:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x495
        jmp L_shared_tail
L_004C991D:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x496
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004C9964:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x497
        jmp L_shared_tail
L_004C9987:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x498
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004C99CE:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x49f
        jmp L_shared_tail
L_004C99F1:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x4a0
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004C9A38:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x4a1
        jmp L_shared_tail
        ; case 0x1000 @ 0x4c9a5b (A1 id 0x499) -> L_004C9A5B
L_004C9A5B:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x499
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004C9AA2:
        cmp eax, 0x1003
        jg L_004C9B4A
        je L_004C9B27
        sub eax, 0x1001
        je L_004C9AE0
        dec eax
        jne L_004C9B54
L_004C9ABD:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x49b
        jmp L_shared_tail
L_004C9AE0:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x49a
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004C9B27:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x49c
        jmp L_shared_tail
L_004C9B4A:
        sub eax, 0x2000
        je L_004C9BBE
        dec eax
        je L_004C9B9B
L_004C9B54:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x4a2
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004C9B9B:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x49e
        jmp L_shared_tail
L_004C9BBE:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x49d
        mov dword ptr [g_7dac74], 1
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004C9C0F:
        add eax, 0xfffffda8
        cmp eax, 0x99
        ja L_004CBC05
        ; jmp dword ptr [eax*4 + 0x4cbcb0] (FF 24 85 B0 BC 4C 00)
        __emit 0xff
        __emit 0x24
        __emit 0x85
        __emit 0xb0
        __emit 0xbc
        __emit 0x4c
        __emit 0x00
L_004C9C26:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x3e9
        jmp L_shared_tail
L_004C9C49:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x3ea
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004C9C90:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x3eb
        jmp L_shared_tail
L_004C9CB3:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x3ec
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004C9CFA:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x3ed
        jmp L_shared_tail
L_004C9D1D:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x3ee
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004C9D64:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x3ef
        jmp L_shared_tail
L_004C9D87:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x3f0
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004C9DCE:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x3f1
        jmp L_shared_tail
L_004C9DF1:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x3f2
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004C9E38:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x3f3
        jmp L_shared_tail
L_004C9E5B:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x3f4
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004C9EA2:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x3f5
        jmp L_shared_tail
L_004C9EC5:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x3f6
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004C9F0C:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x3f7
        jmp L_shared_tail
L_004C9F2F:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x3f8
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004C9F76:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x3f9
        jmp L_shared_tail
L_004C9F99:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x3fa
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004C9FE0:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x3fb
        jmp L_shared_tail
L_004CA003:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x3fc
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CA04A:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x3fd
        jmp L_shared_tail
L_004CA06D:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x3fe
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CA0B4:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x3ff
        jmp L_shared_tail
L_004CA0D7:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x400
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CA11E:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x401
        jmp L_shared_tail
L_004CA141:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x402
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CA188:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x403
        jmp L_shared_tail
L_004CA1AB:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x404
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CA1F2:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x405
        jmp L_shared_tail
L_004CA215:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x406
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CA25C:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x407
        jmp L_shared_tail
L_004CA27F:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x408
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CA2C6:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x409
        jmp L_shared_tail
L_004CA2E9:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x40a
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CA330:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x40b
        jmp L_shared_tail
L_004CA353:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x40c
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CA39A:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x40d
        jmp L_shared_tail
L_004CA3BD:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x40e
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CA404:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x40f
        jmp L_shared_tail
L_004CA427:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x410
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CA46E:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x411
        jmp L_shared_tail
L_004CA491:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x412
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CA4D8:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x413
        jmp L_shared_tail
L_004CA4FB:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x414
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CA542:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x415
        jmp L_shared_tail
L_004CA565:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x416
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CA5AC:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x417
        jmp L_shared_tail
L_004CA5CF:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x418
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CA616:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x419
        jmp L_shared_tail
L_004CA639:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x41a
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CA680:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x41b
        jmp L_shared_tail
L_004CA6A3:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x41c
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CA6EA:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x41d
        jmp L_shared_tail
L_004CA70D:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x41e
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CA754:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x41f
        jmp L_shared_tail
L_004CA777:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x420
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CA7BE:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x421
        jmp L_shared_tail
L_004CA7E1:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x422
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CA828:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x423
        jmp L_shared_tail
L_004CA84B:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x424
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CA892:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x425
        jmp L_shared_tail
L_004CA8B5:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x426
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CA8FC:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x427
        jmp L_shared_tail
L_004CA91F:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x428
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CA966:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x429
        jmp L_shared_tail
L_004CA989:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x42a
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CA9D0:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x42b
        jmp L_shared_tail
L_004CA9F3:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x42c
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CAA3A:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x42d
        jmp L_shared_tail
L_004CAA5D:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x42e
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CAAA4:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x42f
        jmp L_shared_tail
L_004CAAC7:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x430
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CAB0E:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x431
        jmp L_shared_tail
L_004CAB31:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x432
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CAB78:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x433
        jmp L_shared_tail
L_004CAB9B:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x434
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CABE2:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x435
        jmp L_shared_tail
L_004CAC05:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x436
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CAC4C:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x437
        jmp L_shared_tail
L_004CAC6F:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x438
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CACB6:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x439
        jmp L_shared_tail
L_004CACD9:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x43a
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CAD20:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x43b
        jmp L_shared_tail
L_004CAD43:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x43c
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CAD8A:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x43d
        jmp L_shared_tail
L_004CADAD:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x43e
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CADF4:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x43f
        jmp L_shared_tail
L_004CAE17:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x440
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CAE5E:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x441
        jmp L_shared_tail
L_004CAE81:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x442
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CAEC8:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x443
        jmp L_shared_tail
L_004CAEEB:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x444
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CAF32:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x445
        jmp L_shared_tail
L_004CAF55:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x446
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CAF9C:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x447
        jmp L_shared_tail
L_004CAFBF:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x448
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CB006:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x449
        jmp L_shared_tail
L_004CB029:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x44a
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CB070:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x44b
        jmp L_shared_tail
L_004CB093:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x44c
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CB0DA:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x44d
        jmp L_shared_tail
L_004CB0FD:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x44e
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CB144:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x44f
        jmp L_shared_tail
L_004CB167:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x450
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CB1AE:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x451
        jmp L_shared_tail
L_004CB1D1:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x452
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CB218:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x453
        jmp L_shared_tail
L_004CB23B:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x454
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CB282:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x455
        jmp L_shared_tail
L_004CB2A5:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x456
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CB2EC:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x457
        jmp L_shared_tail
L_004CB30F:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x458
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CB356:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x459
        jmp L_shared_tail
L_004CB379:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x45a
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CB3C0:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x45b
        jmp L_shared_tail
L_004CB3E3:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x45c
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CB42A:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x45d
        jmp L_shared_tail
L_004CB44D:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x45e
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CB494:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x45f
        jmp L_shared_tail
L_004CB4B7:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x460
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CB4FE:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x461
        jmp L_shared_tail
L_004CB521:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x462
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CB568:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x463
        jmp L_shared_tail
L_004CB58B:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x464
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CB5D2:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x465
        jmp L_shared_tail
L_004CB5F5:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x466
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CB63C:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x467
        jmp L_shared_tail
L_004CB65F:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x468
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CB6A6:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x469
        jmp L_shared_tail
L_004CB6C9:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x46a
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CB710:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x46b
        jmp L_shared_tail
L_004CB733:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x46c
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CB77A:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x46d
        jmp L_shared_tail
L_004CB79D:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x46e
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CB7E4:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x46f
        jmp L_shared_tail
L_004CB807:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x470
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CB84E:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x471
        jmp L_shared_tail
L_004CB871:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x472
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CB8B8:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x473
        jmp L_shared_tail
L_004CB8DB:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x474
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CB922:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x475
        jmp L_shared_tail
L_004CB945:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x476
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CB98C:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x477
        jmp L_shared_tail
L_004CB9AF:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x478
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CB9F6:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x479
        jmp L_shared_tail
L_004CBA19:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x47a
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CBA60:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x47b
        jmp L_shared_tail
L_004CBA83:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x47c
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CBACA:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x47d
        jmp L_shared_tail
L_004CBAED:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x47e
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CBB34:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x47f
        jmp L_shared_tail
L_004CBB57:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x480
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CBB9E:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x481
        jmp L_shared_tail
L_004CBBBE:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0x482
        call dword ptr [edx + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
L_004CBC05:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0x483
L_shared_tail:
        call dword ptr [eax + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, 0x7dab48
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x14
        ; lea ecx,[ecx] pad (8D 49 00)
        __emit 0x8d
        __emit 0x49
        __emit 0x00
        ; jump table A @ 0x4cbc50 (24 entries -> case blocks)
        __emit 0x63
        __emit 0x95
        __emit 0x4c
        __emit 0x00
        __emit 0xaa
        __emit 0x95
        __emit 0x4c
        __emit 0x00
        __emit 0xcd
        __emit 0x95
        __emit 0x4c
        __emit 0x00
        __emit 0x14
        __emit 0x96
        __emit 0x4c
        __emit 0x00
        __emit 0x37
        __emit 0x96
        __emit 0x4c
        __emit 0x00
        __emit 0x7e
        __emit 0x96
        __emit 0x4c
        __emit 0x00
        __emit 0xa1
        __emit 0x96
        __emit 0x4c
        __emit 0x00
        __emit 0xe8
        __emit 0x96
        __emit 0x4c
        __emit 0x00
        __emit 0x0b
        __emit 0x97
        __emit 0x4c
        __emit 0x00
        __emit 0x52
        __emit 0x97
        __emit 0x4c
        __emit 0x00
        __emit 0x75
        __emit 0x97
        __emit 0x4c
        __emit 0x00
        __emit 0xbc
        __emit 0x97
        __emit 0x4c
        __emit 0x00
        __emit 0xdf
        __emit 0x97
        __emit 0x4c
        __emit 0x00
        __emit 0x26
        __emit 0x98
        __emit 0x4c
        __emit 0x00
        __emit 0x49
        __emit 0x98
        __emit 0x4c
        __emit 0x00
        __emit 0x90
        __emit 0x98
        __emit 0x4c
        __emit 0x00
        __emit 0xb3
        __emit 0x98
        __emit 0x4c
        __emit 0x00
        __emit 0xfa
        __emit 0x98
        __emit 0x4c
        __emit 0x00
        __emit 0x1d
        __emit 0x99
        __emit 0x4c
        __emit 0x00
        __emit 0xce
        __emit 0x99
        __emit 0x4c
        __emit 0x00
        __emit 0xf1
        __emit 0x99
        __emit 0x4c
        __emit 0x00
        __emit 0x38
        __emit 0x9a
        __emit 0x4c
        __emit 0x00
        __emit 0x64
        __emit 0x99
        __emit 0x4c
        __emit 0x00
        __emit 0x87
        __emit 0x99
        __emit 0x4c
        __emit 0x00
        ; jump table B @ 0x4cbcb0 (154 entries -> case blocks)
        __emit 0x26
        __emit 0x9c
        __emit 0x4c
        __emit 0x00
        __emit 0x49
        __emit 0x9c
        __emit 0x4c
        __emit 0x00
        __emit 0x90
        __emit 0x9c
        __emit 0x4c
        __emit 0x00
        __emit 0xb3
        __emit 0x9c
        __emit 0x4c
        __emit 0x00
        __emit 0xfa
        __emit 0x9c
        __emit 0x4c
        __emit 0x00
        __emit 0x1d
        __emit 0x9d
        __emit 0x4c
        __emit 0x00
        __emit 0x64
        __emit 0x9d
        __emit 0x4c
        __emit 0x00
        __emit 0x87
        __emit 0x9d
        __emit 0x4c
        __emit 0x00
        __emit 0xce
        __emit 0x9d
        __emit 0x4c
        __emit 0x00
        __emit 0xf1
        __emit 0x9d
        __emit 0x4c
        __emit 0x00
        __emit 0x38
        __emit 0x9e
        __emit 0x4c
        __emit 0x00
        __emit 0x5b
        __emit 0x9e
        __emit 0x4c
        __emit 0x00
        __emit 0xa2
        __emit 0x9e
        __emit 0x4c
        __emit 0x00
        __emit 0xc5
        __emit 0x9e
        __emit 0x4c
        __emit 0x00
        __emit 0x0c
        __emit 0x9f
        __emit 0x4c
        __emit 0x00
        __emit 0x2f
        __emit 0x9f
        __emit 0x4c
        __emit 0x00
        __emit 0x76
        __emit 0x9f
        __emit 0x4c
        __emit 0x00
        __emit 0x99
        __emit 0x9f
        __emit 0x4c
        __emit 0x00
        __emit 0xe0
        __emit 0x9f
        __emit 0x4c
        __emit 0x00
        __emit 0x03
        __emit 0xa0
        __emit 0x4c
        __emit 0x00
        __emit 0x4a
        __emit 0xa0
        __emit 0x4c
        __emit 0x00
        __emit 0x6d
        __emit 0xa0
        __emit 0x4c
        __emit 0x00
        __emit 0xb4
        __emit 0xa0
        __emit 0x4c
        __emit 0x00
        __emit 0xd7
        __emit 0xa0
        __emit 0x4c
        __emit 0x00
        __emit 0x1e
        __emit 0xa1
        __emit 0x4c
        __emit 0x00
        __emit 0x41
        __emit 0xa1
        __emit 0x4c
        __emit 0x00
        __emit 0x88
        __emit 0xa1
        __emit 0x4c
        __emit 0x00
        __emit 0xab
        __emit 0xa1
        __emit 0x4c
        __emit 0x00
        __emit 0xf2
        __emit 0xa1
        __emit 0x4c
        __emit 0x00
        __emit 0x15
        __emit 0xa2
        __emit 0x4c
        __emit 0x00
        __emit 0x5c
        __emit 0xa2
        __emit 0x4c
        __emit 0x00
        __emit 0x7f
        __emit 0xa2
        __emit 0x4c
        __emit 0x00
        __emit 0xc6
        __emit 0xa2
        __emit 0x4c
        __emit 0x00
        __emit 0xe9
        __emit 0xa2
        __emit 0x4c
        __emit 0x00
        __emit 0x30
        __emit 0xa3
        __emit 0x4c
        __emit 0x00
        __emit 0x53
        __emit 0xa3
        __emit 0x4c
        __emit 0x00
        __emit 0x9a
        __emit 0xa3
        __emit 0x4c
        __emit 0x00
        __emit 0xbd
        __emit 0xa3
        __emit 0x4c
        __emit 0x00
        __emit 0x04
        __emit 0xa4
        __emit 0x4c
        __emit 0x00
        __emit 0x27
        __emit 0xa4
        __emit 0x4c
        __emit 0x00
        __emit 0x6e
        __emit 0xa4
        __emit 0x4c
        __emit 0x00
        __emit 0x91
        __emit 0xa4
        __emit 0x4c
        __emit 0x00
        __emit 0xd8
        __emit 0xa4
        __emit 0x4c
        __emit 0x00
        __emit 0xfb
        __emit 0xa4
        __emit 0x4c
        __emit 0x00
        __emit 0x42
        __emit 0xa5
        __emit 0x4c
        __emit 0x00
        __emit 0x65
        __emit 0xa5
        __emit 0x4c
        __emit 0x00
        __emit 0xac
        __emit 0xa5
        __emit 0x4c
        __emit 0x00
        __emit 0xcf
        __emit 0xa5
        __emit 0x4c
        __emit 0x00
        __emit 0x16
        __emit 0xa6
        __emit 0x4c
        __emit 0x00
        __emit 0x39
        __emit 0xa6
        __emit 0x4c
        __emit 0x00
        __emit 0x80
        __emit 0xa6
        __emit 0x4c
        __emit 0x00
        __emit 0xa3
        __emit 0xa6
        __emit 0x4c
        __emit 0x00
        __emit 0xea
        __emit 0xa6
        __emit 0x4c
        __emit 0x00
        __emit 0x0d
        __emit 0xa7
        __emit 0x4c
        __emit 0x00
        __emit 0x54
        __emit 0xa7
        __emit 0x4c
        __emit 0x00
        __emit 0x77
        __emit 0xa7
        __emit 0x4c
        __emit 0x00
        __emit 0xbe
        __emit 0xa7
        __emit 0x4c
        __emit 0x00
        __emit 0xe1
        __emit 0xa7
        __emit 0x4c
        __emit 0x00
        __emit 0x28
        __emit 0xa8
        __emit 0x4c
        __emit 0x00
        __emit 0x4b
        __emit 0xa8
        __emit 0x4c
        __emit 0x00
        __emit 0x92
        __emit 0xa8
        __emit 0x4c
        __emit 0x00
        __emit 0xb5
        __emit 0xa8
        __emit 0x4c
        __emit 0x00
        __emit 0xfc
        __emit 0xa8
        __emit 0x4c
        __emit 0x00
        __emit 0x1f
        __emit 0xa9
        __emit 0x4c
        __emit 0x00
        __emit 0x66
        __emit 0xa9
        __emit 0x4c
        __emit 0x00
        __emit 0x89
        __emit 0xa9
        __emit 0x4c
        __emit 0x00
        __emit 0xd0
        __emit 0xa9
        __emit 0x4c
        __emit 0x00
        __emit 0xf3
        __emit 0xa9
        __emit 0x4c
        __emit 0x00
        __emit 0x3a
        __emit 0xaa
        __emit 0x4c
        __emit 0x00
        __emit 0x5d
        __emit 0xaa
        __emit 0x4c
        __emit 0x00
        __emit 0xa4
        __emit 0xaa
        __emit 0x4c
        __emit 0x00
        __emit 0xc7
        __emit 0xaa
        __emit 0x4c
        __emit 0x00
        __emit 0x0e
        __emit 0xab
        __emit 0x4c
        __emit 0x00
        __emit 0x31
        __emit 0xab
        __emit 0x4c
        __emit 0x00
        __emit 0x78
        __emit 0xab
        __emit 0x4c
        __emit 0x00
        __emit 0x9b
        __emit 0xab
        __emit 0x4c
        __emit 0x00
        __emit 0xe2
        __emit 0xab
        __emit 0x4c
        __emit 0x00
        __emit 0x05
        __emit 0xac
        __emit 0x4c
        __emit 0x00
        __emit 0x4c
        __emit 0xac
        __emit 0x4c
        __emit 0x00
        __emit 0x6f
        __emit 0xac
        __emit 0x4c
        __emit 0x00
        __emit 0xb6
        __emit 0xac
        __emit 0x4c
        __emit 0x00
        __emit 0xd9
        __emit 0xac
        __emit 0x4c
        __emit 0x00
        __emit 0x20
        __emit 0xad
        __emit 0x4c
        __emit 0x00
        __emit 0x43
        __emit 0xad
        __emit 0x4c
        __emit 0x00
        __emit 0x8a
        __emit 0xad
        __emit 0x4c
        __emit 0x00
        __emit 0xad
        __emit 0xad
        __emit 0x4c
        __emit 0x00
        __emit 0xf4
        __emit 0xad
        __emit 0x4c
        __emit 0x00
        __emit 0x17
        __emit 0xae
        __emit 0x4c
        __emit 0x00
        __emit 0x5e
        __emit 0xae
        __emit 0x4c
        __emit 0x00
        __emit 0x81
        __emit 0xae
        __emit 0x4c
        __emit 0x00
        __emit 0xc8
        __emit 0xae
        __emit 0x4c
        __emit 0x00
        __emit 0xeb
        __emit 0xae
        __emit 0x4c
        __emit 0x00
        __emit 0x32
        __emit 0xaf
        __emit 0x4c
        __emit 0x00
        __emit 0x55
        __emit 0xaf
        __emit 0x4c
        __emit 0x00
        __emit 0x9c
        __emit 0xaf
        __emit 0x4c
        __emit 0x00
        __emit 0xbf
        __emit 0xaf
        __emit 0x4c
        __emit 0x00
        __emit 0x06
        __emit 0xb0
        __emit 0x4c
        __emit 0x00
        __emit 0x29
        __emit 0xb0
        __emit 0x4c
        __emit 0x00
        __emit 0x70
        __emit 0xb0
        __emit 0x4c
        __emit 0x00
        __emit 0x93
        __emit 0xb0
        __emit 0x4c
        __emit 0x00
        __emit 0xda
        __emit 0xb0
        __emit 0x4c
        __emit 0x00
        __emit 0xfd
        __emit 0xb0
        __emit 0x4c
        __emit 0x00
        __emit 0x44
        __emit 0xb1
        __emit 0x4c
        __emit 0x00
        __emit 0x67
        __emit 0xb1
        __emit 0x4c
        __emit 0x00
        __emit 0xae
        __emit 0xb1
        __emit 0x4c
        __emit 0x00
        __emit 0xd1
        __emit 0xb1
        __emit 0x4c
        __emit 0x00
        __emit 0x18
        __emit 0xb2
        __emit 0x4c
        __emit 0x00
        __emit 0x3b
        __emit 0xb2
        __emit 0x4c
        __emit 0x00
        __emit 0x82
        __emit 0xb2
        __emit 0x4c
        __emit 0x00
        __emit 0xa5
        __emit 0xb2
        __emit 0x4c
        __emit 0x00
        __emit 0xec
        __emit 0xb2
        __emit 0x4c
        __emit 0x00
        __emit 0x0f
        __emit 0xb3
        __emit 0x4c
        __emit 0x00
        __emit 0x56
        __emit 0xb3
        __emit 0x4c
        __emit 0x00
        __emit 0x79
        __emit 0xb3
        __emit 0x4c
        __emit 0x00
        __emit 0xc0
        __emit 0xb3
        __emit 0x4c
        __emit 0x00
        __emit 0xe3
        __emit 0xb3
        __emit 0x4c
        __emit 0x00
        __emit 0x2a
        __emit 0xb4
        __emit 0x4c
        __emit 0x00
        __emit 0x4d
        __emit 0xb4
        __emit 0x4c
        __emit 0x00
        __emit 0x94
        __emit 0xb4
        __emit 0x4c
        __emit 0x00
        __emit 0xb7
        __emit 0xb4
        __emit 0x4c
        __emit 0x00
        __emit 0xfe
        __emit 0xb4
        __emit 0x4c
        __emit 0x00
        __emit 0x21
        __emit 0xb5
        __emit 0x4c
        __emit 0x00
        __emit 0x68
        __emit 0xb5
        __emit 0x4c
        __emit 0x00
        __emit 0x8b
        __emit 0xb5
        __emit 0x4c
        __emit 0x00
        __emit 0xd2
        __emit 0xb5
        __emit 0x4c
        __emit 0x00
        __emit 0xf5
        __emit 0xb5
        __emit 0x4c
        __emit 0x00
        __emit 0x3c
        __emit 0xb6
        __emit 0x4c
        __emit 0x00
        __emit 0x5f
        __emit 0xb6
        __emit 0x4c
        __emit 0x00
        __emit 0xa6
        __emit 0xb6
        __emit 0x4c
        __emit 0x00
        __emit 0xc9
        __emit 0xb6
        __emit 0x4c
        __emit 0x00
        __emit 0x10
        __emit 0xb7
        __emit 0x4c
        __emit 0x00
        __emit 0x33
        __emit 0xb7
        __emit 0x4c
        __emit 0x00
        __emit 0x7a
        __emit 0xb7
        __emit 0x4c
        __emit 0x00
        __emit 0x9d
        __emit 0xb7
        __emit 0x4c
        __emit 0x00
        __emit 0xe4
        __emit 0xb7
        __emit 0x4c
        __emit 0x00
        __emit 0x07
        __emit 0xb8
        __emit 0x4c
        __emit 0x00
        __emit 0x4e
        __emit 0xb8
        __emit 0x4c
        __emit 0x00
        __emit 0x71
        __emit 0xb8
        __emit 0x4c
        __emit 0x00
        __emit 0xb8
        __emit 0xb8
        __emit 0x4c
        __emit 0x00
        __emit 0xdb
        __emit 0xb8
        __emit 0x4c
        __emit 0x00
        __emit 0x22
        __emit 0xb9
        __emit 0x4c
        __emit 0x00
        __emit 0x45
        __emit 0xb9
        __emit 0x4c
        __emit 0x00
        __emit 0x8c
        __emit 0xb9
        __emit 0x4c
        __emit 0x00
        __emit 0xaf
        __emit 0xb9
        __emit 0x4c
        __emit 0x00
        __emit 0xf6
        __emit 0xb9
        __emit 0x4c
        __emit 0x00
        __emit 0x19
        __emit 0xba
        __emit 0x4c
        __emit 0x00
        __emit 0x60
        __emit 0xba
        __emit 0x4c
        __emit 0x00
        __emit 0x83
        __emit 0xba
        __emit 0x4c
        __emit 0x00
        __emit 0xca
        __emit 0xba
        __emit 0x4c
        __emit 0x00
        __emit 0xed
        __emit 0xba
        __emit 0x4c
        __emit 0x00
        __emit 0x34
        __emit 0xbb
        __emit 0x4c
        __emit 0x00
        __emit 0x57
        __emit 0xbb
        __emit 0x4c
        __emit 0x00
        __emit 0x9e
        __emit 0xbb
        __emit 0x4c
        __emit 0x00
        __emit 0xbe
        __emit 0xbb
        __emit 0x4c
        __emit 0x00
    }
}
