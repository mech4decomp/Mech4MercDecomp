/*
 * FUN_00505A40 (588 B) — Sound channel object constructor/initializer
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void* func_00505A40(void)
{
    /* extern data/function symbols */
    extern void __cdecl FUN_00506120(void);
    extern void __cdecl FUN_00722f70(void);
    extern void __cdecl FUN_004084d0(void);
    extern void __cdecl FUN_005056d0(void);
    extern void __cdecl FUN_00505d50(void);
    extern void __cdecl FUN_00505320(void);
    extern void __cdecl FUN_00722660(void);
    __asm {
        sub     esp, 8
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, [esp+0x1C]
        push    edi
        mov     esi, ecx
        call    FUN_00506120
        mov     [esi], eax
        mov     [esi+0x38], edi
        mov     dword ptr [esi+0x54], -1
        mov     eax, 0xBF800000
        mov     [esi+0x18], eax
        mov     [esi+0x1C], eax
        xor     eax, eax
        xor     ebp, ebp
        mov     [esi+0x20], ebp
        lea     ecx, [esi+4]
        mov     [ecx], eax
        mov     [ecx+4], eax
        mov     [ecx+8], eax
        mov     [ecx+0xC], eax
        mov     [ecx+0x10], eax
        xor     edx, edx
        lea     eax, [esi+0x24]
        mov     [eax], edx
        mov     [eax+4], edx
        add     esp, 4
        mov     [eax+8], edx
        lea     ecx, [esp+0x10]
        push    ecx
        mov     [eax+0xC], edx
        push    edi
        mov     [eax+0x10], edx
        call    FUN_00722f70
        mov     edx, [esp+0x14]
        shr     edx, 0x1E
        mov     ebx, 1
        and     dl, bl
        push    0x38
        mov     byte ptr [esi+0x50], dl
        mov     [esi+0x3C], ebp
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, ebp
        je      alloc1_fail
        mov     ecx, [esp+0x20]
        push    ebp
        push    ebp
        push    ecx
        push    0x3F800000
        push    ebp
        push    0xBF800000
        mov     ecx, eax
        call    FUN_005056d0
        jmp     alloc1_done

alloc1_fail:
        xor     eax, eax

alloc1_done:
        push    eax
        push    ebp
        mov     ecx, esi
        call    FUN_00505d50
        push    0x38
        mov     [esi+0x40], ebx
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, ebp
        je      alloc2_fail
        mov     edx, [esp+0x24]
        push    ebp
        push    ebp
        push    edx
        push    0x3F800000
        push    ebp
        push    0xBF800000
        mov     ecx, eax
        call    FUN_005056d0
        jmp     alloc2_done

alloc2_fail:
        xor     eax, eax

alloc2_done:
        push    eax
        push    ebx
        mov     ecx, esi
        call    FUN_00505d50
        mov     eax, [esp+0x14]
        test    eax, 0x1E000000
        jbe     skip_3d
        mov     [esi+0x20], ebx

skip_3d:
        test    al, 4
        je      check_6ch
        push    0x34
        mov     dword ptr [esi+0x44], 2
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 4
        cmp     edi, ebp
        je      alloc3_fail_2ch
        mov     eax, [esp+0x28]
        push    ebp
        push    ebx
        push    eax
        push    0x3F800000
        push    0xBF800000
        mov     ecx, edi
        call    FUN_00505320
        mov     ecx, [esp+0x28]
        push    edi
        mov     [edi+0x30], ecx
        push    2
        mov     ecx, esi
        mov     dword ptr [edi], 0x776EB8
        mov     dword ptr [edi+4], 0xBF800000
        mov     dword ptr [edi+8], 0x3F800000
        call    FUN_00505d50
        mov     eax, [esp+0x14]
        jmp     after_44

alloc3_fail_2ch:
        xor     edi, edi
        push    edi
        push    2
        mov     ecx, esi
        call    FUN_00505d50
        mov     eax, [esp+0x14]
        jmp     after_44

check_6ch:
        test    al, 0x40
        je      set_default_44
        push    0x34
        mov     dword ptr [esi+0x44], 6
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 4
        cmp     edi, ebp
        je      alloc3_fail_2ch
        mov     edx, [esp+0x28]
        push    ebp
        push    ebx
        push    edx
        push    0x3F800000
        push    0xBF800000
        mov     ecx, edi
        call    FUN_00505320
        mov     eax, [esp+0x28]
        push    edi
        push    2
        mov     ecx, esi
        mov     dword ptr [edi], 0x776EB8
        mov     dword ptr [edi+4], 0xBF800000
        mov     dword ptr [edi+8], 0x3F800000
        mov     [edi+0x30], eax
        call    FUN_00505d50
        mov     eax, [esp+0x14]
        jmp     after_44

set_default_44:
        mov     dword ptr [esi+0x44], 0xC

after_44:
        test    al, 0x20
        je      set_default_48
        push    0x38
        mov     dword ptr [esi+0x48], 5
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, ebp
        je      alloc4_fail
        mov     ecx, [esp+0x2C]
        push    ebp
        push    ebp
        push    ecx
        push    0x3F800000
        push    ebp
        push    0xBF800000
        mov     ecx, eax
        call    FUN_005056d0
        push    eax
        push    3
        mov     ecx, esi
        call    FUN_00505d50
        jmp     after_48

alloc4_fail:
        xor     eax, eax
        push    eax
        push    3
        mov     ecx, esi
        call    FUN_00505d50
        jmp     after_48

set_default_48:
        mov     dword ptr [esi+0x48], 0xC

after_48:
        mov     ebx, [esi]
        push    ebx
        call    FUN_004084d0
        add     esp, 4
        mov     ebp, eax
        xor     edi, edi
        test    ebx, ebx
        mov     [esi+0x4C], ebp
        jbe     copy_done

copy_loop:
        mov     eax, [esi+0x38]
        push    edi
        push    eax
        call    FUN_00722660
        mov     byte ptr [edi+ebp], al
        inc     edi
        cmp     edi, ebx
        jb      copy_loop

copy_done:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        ret     0x14
    }
}
