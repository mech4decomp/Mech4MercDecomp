// FUN_00536510 (815 bytes)
// __thiscall, standard cdecl (ret without cleanup)
// Resource loading / processing function
__declspec(naked) void func_00536510(void)
{
    

extern void __cdecl FUN_00547b20(void);
extern int DAT_0076b420;
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_004125e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_0040d9b0(void);
extern void __cdecl FUN_0040f060(void);
extern void __cdecl FUN_00547d40(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0041d890(void);
extern void __cdecl FUN_0041db30(void);
extern void __cdecl FUN_006fbc80(void);
extern void __cdecl FUN_0041de80(void);
extern void __cdecl FUN_0072df20(void);
extern void __cdecl FUN_0051a820(void);
extern void __cdecl FUN_0041dec0(void);
extern void __cdecl FUN_0041db70(void);
extern void __cdecl FUN_0041dac0(void);
extern void __cdecl FUN_004084e0(void);
__asm {
mov     eax, dword ptr [ecx + 0xa0]
        sub     esp, 0x13c
        push    ebx
        push    ebp
        push    esi
        push    edi
        lea     edi, [ecx + 0x9c]
        mov     ecx, dword ptr [edi]
        push    eax
        push    ecx
        mov     ecx, edi
        call FUN_00547b20
        mov ebp, dword ptr [DAT_0076b420]
        xor     ebx, ebx

loop_42:
        push    ebx
        lea     edx, [esp + 0x50]
        push    0x77a054
        push    edx
        call    ebp
        add     esp, 0x0c
        push    0x77a034
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x14], 0x00
        call FUN_00412780
        mov     ecx, dword ptr [esp + 0x10]
        lea     eax, [esp + 0x4c]
        push    eax
        push    ecx
        lea     ecx, [esp + 0x1c]
        call FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x14]
        call FUN_00412740
        lea     ecx, [esp + 0x14]
        call FUN_0040d9b0
        mov     esi, dword ptr [edi + 0x04]
        cmp     esi, dword ptr [edi + 0x08]
        jz      grow_buffer
        test    esi, esi
        jz      skip_copy
        lea     edx, [esp + 0x10]
        push    edx
        mov     ecx, esi
        call FUN_0040f060
skip_copy:
        add     esi, 0x04
        mov     dword ptr [edi + 0x04], esi
        jmp     after_grow

grow_buffer:
        push    0x01
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        mov     ecx, edi
        call FUN_00547d40

after_grow:
        lea     ecx, [esp + 0x10]
        call FUN_0040d9b0
        inc     ebx
        cmp     ebx, 0x42
        jl      loop_42

        push    0x77a010
        lea     ecx, [esp + 0x1c]
        call FUN_00412570
        push    0x38
        call FUN_004084d0
        xor     ebp, ebp
        add     esp, 0x04
        cmp     eax, ebp
        jz      alloc2_null
        mov     ecx, dword ptr [esp + 0x18]
        push    0x01
        push    ecx
        mov     ecx, eax
        call FUN_0041d890
        mov     ebx, eax
        jmp     after_alloc1

alloc2_null:
        xor     ebx, ebx

after_alloc1:
        mov     ecx, ebx
        call FUN_0041db30
        mov     esi, eax
        cmp     esi, ebp
        jz      skip_inner_loop

inner_loop_start:
        push    0x779ff0
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x14], ebp
        call FUN_00412780
        mov     edx, dword ptr [esp + 0x10]
        push    esi
        push    edx
        lea     ecx, [esp + 0x1c]
        call FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x14]
        call FUN_00412740
        lea     ecx, [esp + 0x14]
        call FUN_0040d9b0
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        call FUN_006fbc80
        cmp     eax, 0x1400
        jnc     skip_process
        mov     ecx, dword ptr [esp + 0x10]
        push    ebp
        push    ecx
        lea     ecx, [esp + 0x24]
        call FUN_0041de80
        mov     edx, dword ptr [esp + 0x38]
        mov     eax, dword ptr [esp + 0x30]
        push    edx
        push    eax
        call FUN_0072df20
        test    al, al
        jz      skip_add
        push    esi
        call FUN_0051a820
        add     esp, 0x04

skip_add:
        lea     ecx, [esp + 0x1c]
        call FUN_0041dec0

skip_process:
        mov     ecx, ebx
        call FUN_0041db70
        lea     ecx, [esp + 0x10]
        call FUN_0040d9b0
        mov     ecx, ebx
        call FUN_0041db30
        mov     esi, eax
        cmp     esi, ebp
        jnz     inner_loop_start

skip_inner_loop:
        cmp     ebx, ebp
        jz      after_free1
        mov     ecx, ebx
        call FUN_0041dac0
        push    ebx
        call FUN_004084e0
        add     esp, 0x04

after_free1:
        push    0x38
        call FUN_004084d0
        add     esp, 0x04
        cmp     eax, ebp
        jz      alloc3_null
        mov     ecx, dword ptr [esp + 0x18]
        push    0x01
        push    ecx
        mov     ecx, eax
        call FUN_0041d890
        mov     ebx, eax
        jmp     after_alloc2

alloc3_null:
        xor     ebx, ebx

after_alloc2:
        mov     ecx, ebx
        call FUN_0041db30
        mov     esi, eax
        cmp     esi, ebp
        jz      skip_inner_loop2

inner_loop2_start:
        push    0x779ff0
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x14], ebp
        call FUN_00412780
        mov     edx, dword ptr [esp + 0x10]
        push    esi
        push    edx
        lea     ecx, [esp + 0x1c]
        call FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x14]
        call FUN_00412740
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, ebp
        jz      skip_free_str1
        mov     cl, byte ptr [eax - 0x01]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_free_str1
        push    eax
        call FUN_004084e0
        add     esp, 0x04

skip_free_str1:
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        call FUN_006fbc80
        cmp     eax, 0x1400
        jnc     skip_process2
        mov     ecx, dword ptr [esp + 0x10]
        push    ebp
        push    ecx
        lea     ecx, [esp + 0x24]
        call FUN_0041de80
        mov     edx, dword ptr [esp + 0x38]
        mov     eax, dword ptr [esp + 0x30]
        push    edx
        push    eax
        call FUN_0072df20
        test    al, al
        jz      skip_add2
        mov     esi, dword ptr [edi + 0x04]
        cmp     esi, dword ptr [edi + 0x08]
        jz      grow_buffer2
        cmp     esi, ebp
        jz      skip_copy2
        lea     ecx, [esp + 0x10]
        push    ecx
        mov     ecx, esi
        call FUN_0040f060

skip_copy2:
        add     esi, 0x04
        mov     dword ptr [edi + 0x04], esi
        jmp     after_grow2

grow_buffer2:
        push    0x01
        lea     edx, [esp + 0x14]
        push    edx
        push    esi
        mov     ecx, edi
        call FUN_00547d40

after_grow2:
        mov     eax, dword ptr [edi + 0x04]
        sub     eax, dword ptr [edi]
        sar     eax, 0x02
        dec     eax
        cmp     eax, 0x80
        jz      found_128

skip_add2:
        lea     ecx, [esp + 0x1c]
        call FUN_0041dec0

skip_process2:
        mov     ecx, ebx
        call FUN_0041db70
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, ebp
        jz      skip_free_str2
        mov     cl, byte ptr [eax - 0x01]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_free_str2
        push    eax
        call FUN_004084e0
        add     esp, 0x04

skip_free_str2:
        mov     ecx, ebx
        call FUN_0041db30
        mov     esi, eax
        cmp     esi, ebp
        jnz     inner_loop2_start
        jmp     skip_inner_loop2

found_128:
        lea     ecx, [esp + 0x1c]
        call FUN_0041dec0
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, ebp
        jz      skip_free_str3
        mov     cl, byte ptr [eax - 0x01]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_free_str3
        push    eax
        call FUN_004084e0
        add     esp, 0x04

skip_free_str3:
skip_inner_loop2:
        cmp     ebx, ebp
        jz      after_free2
        mov     ecx, ebx
        call FUN_0041dac0
        push    ebx
        call FUN_004084e0
        add     esp, 0x04

after_free2:
        mov     eax, dword ptr [esp + 0x18]
        pop     edi
        pop     esi
        cmp     eax, ebp
        pop     ebp
        pop     ebx
        jz      skip_final_free
        mov     cl, byte ptr [eax - 0x01]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_final_free
        push    eax
        call FUN_004084e0
        add     esp, 0x04

skip_final_free:
        add     esp, 0x13c
        ret
    }


}
