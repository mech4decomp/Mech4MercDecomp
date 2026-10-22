/*
 * FUN_0057DBF0 (1165 B) — Two-object transform computation and order dispatch.
 *
 * Reads two object IDs from a bytecode stream, resolves both to objects,
 * extracts their transforms, computes a combined transform, and dispatches
 * an order via a series of function calls.
 *
 * __cdecl (params on stack), returns undefined4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_0057DBF0(void)
{
    

extern int DAT_00805918;
extern int DAT_00805908;
extern void __cdecl FUN_0064db26(void);
extern int DAT_0080592c;
extern void __cdecl FUN_0064dafe(void);
extern int DAT_0080d964;
extern int DAT_007dde2c;
extern void __cdecl FUN_100566651(void);
extern void __cdecl FUN_006fab6b(void);
extern void __cdecl FUN_10056662b(void);
extern void __cdecl FUN_006fab45(void);
extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_1004fca60(void);
extern void __cdecl FUN_1005665e7(void);
extern void __cdecl FUN_006fab01(void);
extern int DAT_007dc690;
extern void __cdecl FUN_100415122(void);
extern void __cdecl FUN_1005665b4(void);
extern void __cdecl FUN_006faace(void);
extern void __cdecl FUN_100566563(void);
extern void __cdecl FUN_006faa7d(void);
extern void __cdecl FUN_10056653d(void);
extern void __cdecl FUN_006faa57(void);
extern void __cdecl FUN_1004fc973(void);
extern void __cdecl FUN_1005664fa(void);
extern void __cdecl FUN_006faa14(void);
extern void __cdecl FUN_100415035(void);
extern void __cdecl FUN_1005664c7(void);
extern void __cdecl FUN_006fa9e1(void);
extern void __cdecl FUN_10041922a(void);
extern void __cdecl FUN_10041921b(void);
extern void __cdecl FUN_100419200(void);
extern void __cdecl FUN_1004191f1(void);
extern void __cdecl FUN_100408219(void);
extern void __cdecl FUN_1004069c1(void);
extern void __cdecl FUN_1004081d2(void);
extern void __cdecl FUN_1004e27b2(void);
extern void __cdecl FUN_1004f8248(void);
extern void __cdecl FUN_1004f8149(void);
extern void __cdecl FUN_100419072(void);
extern void __cdecl FUN_10040bff3(void);
extern void __cdecl FUN_10041904e(void);
extern void __cdecl FUN_10040bfcf(void);
extern void __cdecl FUN_10055b1b2(void);
extern void __cdecl FUN_1004236ca(void);
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0x4c
        mov eax, dword ptr [DAT_00805918]
        movsx   ecx, byte ptr [eax + 1]
        inc     eax
        push    ebx
        push    esi
        inc     eax
        push    edi
        mov dword ptr [DAT_00805908], ecx
        mov dword ptr [DAT_00805918], eax
        call FUN_0064db26
        mov eax, dword ptr [DAT_0080592c]
        mov     esi, dword ptr [eax]
        sub     eax, 4
        mov dword ptr [DAT_0080592c], eax
        mov eax, dword ptr [DAT_00805918]
        movsx   edx, byte ptr [eax]
        inc     eax
        mov dword ptr [DAT_00805908], edx
        mov dword ptr [DAT_00805918], eax
        call FUN_0064dafe
        mov eax, dword ptr [DAT_0080592c]
        mov     ebx, dword ptr [eax]
        sub     eax, 4
        cmp     esi, -1
        mov dword ptr [DAT_0080592c], eax
        jnz     obj1_not_minus1
        mov eax, dword ptr [DAT_0080d964]
        mov     dword ptr [ebp - 4], eax
        jmp     obj1_done
obj1_not_minus1:
        mov al, byte ptr [DAT_007dde2c]
        mov     edi, esi
        sar     edi, 0x18
        test    al, al
        jz      obj1_assert_done
        test    edi, edi
        jge     obj1_assert1_done
        push    0x77f724
        call FUN_100566651
        push    eax
        call FUN_006fab6b
        add     esp, 8
        test    eax, eax
        jz      obj1_assert1_done
        int     3
obj1_assert1_done:
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        jz      obj1_assert_done
        cmp     edi, 0x12
        jl      obj1_assert_done
        push    0x77f724
        call FUN_10056662b
        push    eax
        call FUN_006fab45
        add     esp, 8
        test    eax, eax
        jz      obj1_assert_done
        int     3
obj1_assert_done:
        mov ecx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [ecx]
        xor eax, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax + 0x10]
        push    esi
        xor     ecx, 0x85739531
        call FUN_1004fca60
        mov     esi, eax
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        jz      obj1_check_result
        test    esi, esi
        jnz     obj1_assert2_done
        push    0x77f724
        call FUN_1005665e7
        push    eax
        call FUN_006fab01
        add     esp, 8
        test    eax, eax
        jz      obj1_assert2_done
        int     3
obj1_assert2_done:
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        jz      obj1_check_result
        mov eax, dword ptr [DAT_007dc690]
        mov     ecx, dword ptr [esi + 4]
        push    eax
        call FUN_100415122
        test    al, al
        jnz     obj1_check_result
        push    0x77f68c
        call FUN_1005665b4
        push    eax
        call FUN_006faace
        add     esp, 8
        test    eax, eax
        jz      obj1_check_result
        int     3
obj1_check_result:
        test    esi, esi
        jnz     obj1_not_null
        mov     dword ptr [ebp - 4], esi
        jmp     obj1_done
obj1_not_null:
        xor     edx, edx
        cmp     esi, -1
        setz    dl
        dec     edx
        and     edx, esi
        mov     dword ptr [ebp - 4], edx
obj1_done:
        cmp     ebx, -1
        jnz     obj2_not_minus1
        mov edi, dword ptr [DAT_0080d964]
        jmp     obj2_done
obj2_not_minus1:
        mov al, byte ptr [DAT_007dde2c]
        mov     esi, ebx
        sar     esi, 0x18
        test    al, al
        jz      obj2_assert_done
        test    esi, esi
        jge     obj2_assert1_done
        push    0x77f724
        call FUN_100566563
        push    eax
        call FUN_006faa7d
        add     esp, 8
        test    eax, eax
        jz      obj2_assert1_done
        int     3
obj2_assert1_done:
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        jz      obj2_assert_done
        cmp     esi, 0x12
        jl      obj2_assert_done
        push    0x77f724
        call FUN_10056653d
        push    eax
        call FUN_006faa57
        add     esp, 8
        test    eax, eax
        jz      obj2_assert_done
        int     3
obj2_assert_done:
        mov eax, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [eax]
        xor eax, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax + 0x10]
        push    ebx
        xor     ecx, 0x85739531
        call FUN_1004fc973
        mov     esi, eax
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        jz      obj2_check_result
        test    esi, esi
        jnz     obj2_assert2_done
        push    0x77f724
        call FUN_1005664fa
        push    eax
        call FUN_006faa14
        add     esp, 8
        test    eax, eax
        jz      obj2_assert2_done
        int     3
obj2_assert2_done:
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        jz      obj2_check_result
        mov eax, dword ptr [DAT_007dc690]
        mov     ecx, dword ptr [esi + 4]
        push    eax
        call FUN_100415035
        test    al, al
        jnz     obj2_check_result
        push    0x77f68c
        call FUN_1005664c7
        push    eax
        call FUN_006fa9e1
        add     esp, 8
        test    eax, eax
        jz      obj2_check_result
        int     3
obj2_check_result:
        test    esi, esi
        jnz     obj2_not_null
        xor     edi, edi
        jmp     obj2_done
obj2_not_null:
        xor     ecx, ecx
        cmp     esi, -1
        setz    cl
        dec     ecx
        and     ecx, esi
        mov     edi, ecx
obj2_done:
        mov     eax, dword ptr [ebp - 4]
        xor     ebx, ebx
        cmp     eax, ebx
        jz      epilogue
        cmp     edi, ebx
        jz      epilogue
        mov     eax, dword ptr [eax + 0xd8]
        lea     esi, [eax + 0x80]
        push    esi
        lea     ecx, [ebp - 0x4c]
        call FUN_10041922a
        mov     edx, dword ptr [ebp - 0x4c]
        push    esi
        lea     ecx, [ebp - 0x34]
        mov     dword ptr [ebp - 0x14], edx
        call FUN_10041921b
        mov     eax, dword ptr [ebp - 0x2c]
        mov     dword ptr [ebp - 0x10], eax
        mov     eax, dword ptr [edi + 0xd8]
        lea     esi, [eax + 0x80]
        push    esi
        lea     ecx, [ebp - 0x20]
        call FUN_100419200
        mov     ecx, dword ptr [ebp - 0x20]
        mov     dword ptr [ebp - 0x28], ecx
        push    esi
        lea     ecx, [ebp - 0x40]
        call FUN_1004191f1
        mov     eax, dword ptr [ebp - 0x2c]
        mov     edx, dword ptr [ebp - 0x38]
        mov     ecx, dword ptr [ebp - 0x20]
        mov     dword ptr [ebp - 0x2c], eax
        mov     eax, dword ptr [ebp - 0x4c]
        push    0x20
        mov     dword ptr [ebp - 0x24], edx
        mov     dword ptr [ebp - 0x30], ecx
        mov     dword ptr [ebp - 0x18], edx
        mov     dword ptr [ebp - 0x1c], eax
        mov     dword ptr [ebp - 0x0c], ebx
        mov     dword ptr [ebp - 0x08], ebx
        call FUN_100408219
        mov     esi, eax
        add     esp, 4
        cmp     esi, ebx
        jz      alloc_failed
        push    0x423b70
        push    4
        push    8
        push    esi
        call FUN_1004069c1
        jmp     alloc_done
alloc_failed:
        xor     esi, esi
alloc_done:
        cmp     dword ptr [ebp - 0x0c], ebx
        jz      copy_done
        mov     eax, dword ptr [ebp - 0x08]
        cmp     eax, 4
        jbe     copy_count_ok
        mov     eax, 4
copy_count_ok:
        mov     ecx, eax
        dec     eax
        test    ecx, ecx
        jz      copy_loop_done
copy_loop:
        mov     edx, dword ptr [ebp - 0x0c]
        lea     ecx, [edx + eax*8]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [esi + eax*8], edx
        mov     ecx, dword ptr [ecx + 4]
        mov     edx, eax
        mov     dword ptr [esi + eax*8 + 4], ecx
        dec     eax
        test    edx, edx
        jnz     copy_loop
copy_loop_done:
        mov     eax, dword ptr [ebp - 0x0c]
        push    eax
        call FUN_1004081d2
        add     esp, 4
copy_done:
        mov     ecx, dword ptr [ebp - 0x14]
        mov     edx, dword ptr [ebp - 0x10]
        mov     eax, dword ptr [ebp - 0x1c]
        mov     dword ptr [ebp - 0x0c], esi
        mov     dword ptr [ebp - 0x08], 4
        mov     dword ptr [esi], ecx
        mov     dword ptr [esi + 4], edx
        mov     ecx, dword ptr [ebp - 0x0c]
        mov     edx, dword ptr [ebp - 0x18]
        mov     dword ptr [ecx + 8], eax
        mov     eax, dword ptr [ebp - 0x0c]
        mov     ecx, dword ptr [ebp - 0x28]
        mov     dword ptr [eax + 0x0c], edx
        mov     edx, dword ptr [ebp - 0x0c]
        mov     eax, dword ptr [ebp - 0x24]
        mov     dword ptr [edx + 0x10], ecx
        mov     ecx, dword ptr [ebp - 0x0c]
        mov     edx, dword ptr [ebp - 0x30]
        mov     dword ptr [ecx + 0x14], eax
        mov     eax, dword ptr [ebp - 0x0c]
        mov     ecx, dword ptr [ebp - 0x2c]
        mov     dword ptr [eax + 0x18], edx
        mov     edx, dword ptr [ebp - 0x0c]
        mov     dword ptr [edx + 0x1c], ecx
        mov     eax, dword ptr [ebp - 0x08]
        xor     esi, esi
        cmp     eax, ebx
        jbe     transform_loop_done
transform_loop:
        mov     eax, dword ptr [ebp - 0x0c]
        mov edx, dword ptr [DAT_007dab44]
        lea     eax, [eax + esi*8]
        lea     ecx, [eax + 4]
        push    ecx
        mov ecx, dword ptr [DAT_007dab40]
        push    eax
        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x1c]
        xor     ecx, 0x85739531
        call FUN_1004e27b2
        mov     eax, dword ptr [ebp - 0x08]
        inc     esi
        cmp     esi, eax
        jc      transform_loop
transform_loop_done:
        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        xor edx, dword ptr [DAT_007dab40]
        mov     esi, dword ptr [edx + 0x20]
        lea     eax, [ebp - 0x0c]
        xor     esi, 0x85739531
        push    eax
        mov     ecx, esi
        call FUN_1004f8248
        mov     ecx, dword ptr [ebp - 0x0c]
        mov     dword ptr [ecx], ebx
        mov     edx, dword ptr [ebp - 0x0c]
        mov     dword ptr [edx + 4], ebx
        mov     eax, dword ptr [ebp - 0x0c]
        mov     dword ptr [eax + 8], ebx
        mov     ecx, dword ptr [ebp - 0x0c]
        mov     eax, 0x38d1b717
        mov     dword ptr [ecx + 0x0c], eax
        mov     edx, dword ptr [ebp - 0x0c]
        mov     dword ptr [edx + 0x10], eax
        mov     ecx, dword ptr [ebp - 0x0c]
        mov     dword ptr [ecx + 0x14], eax
        mov     edx, dword ptr [ebp - 0x0c]
        mov     dword ptr [edx + 0x18], eax
        mov     eax, dword ptr [ebp - 0x0c]
        lea     ecx, [ebp - 0x0c]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [eax + 0x1c], ebx
        call FUN_1004f8149
        mov     edx, dword ptr [ebp - 4]
        mov     eax, dword ptr [edx + 0xd8]
        add     eax, 0x80
        push    eax
        lea     ecx, [ebp - 0x4c]
        call FUN_100419072
        lea     ecx, [ebp - 0x4c]
        push    ecx
        lea     ecx, [esi + 0x227c]
        call FUN_10040bff3
        mov     edx, dword ptr [edi + 0xd8]
        add     edx, 0x80
        push    edx
        lea     ecx, [ebp - 0x4c]
        call FUN_10041904e
        lea     eax, [ebp - 0x4c]
        push    eax
        lea     ecx, [esi + 0x2288]
        call FUN_10040bfcf
        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        xor edx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [edx + 0x2c]
        push    ebx
        xor     ecx, 0x85739531
        call FUN_10055b1b2
        lea     ecx, [ebp - 0x0c]
        call FUN_1004236ca
epilogue:
        mov eax, dword ptr [DAT_00805918]
        movsx   ecx, byte ptr [eax]
        pop     edi
        inc     eax
        pop     esi
        mov dword ptr [DAT_00805918], eax
        mov dword ptr [DAT_00805908], ecx
        xor     eax, eax
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }


}
