/*
 * FUN_00564aa0 (498 B) — Mission parameter initialization / stats reporting setup.
 *
 * Checks global state, resolves obfuscated pointers, builds wide-char strings
 * for map name, host name, version, and calls a dispatch function pointer.
 *
 * __stdcall (standard prologue/epilogue, no explicit params in signature).
 * CFLAGS: /O1
 */

extern int __cdecl FUN_006fab90(const char *msg);
extern char __stdcall FUN_006fc4d0(const char *key);
extern void *__stdcall FUN_004cc9f0(void);

__declspec(naked) int __stdcall FUN_00564aa0(void)
{
    

extern int DAT_007eebd4;
extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007eebc0;
extern int DAT_007eebc8;
extern int DAT_007eebcc;
extern int DAT_0076b3e8;
extern int DAT_0076b3e0;
extern int DAT_007eebd8;
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0x604
        mov eax, dword ptr [DAT_007eebd4]
        test    eax, eax
        push    ebx
        push    esi
        push    edi
        jnz     l_global_ok
        mov     eax, 0x80004005
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

l_global_ok:
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [ecx + 0xc]
        xor     edx, 0x85739531
        lea     eax, [ecx + 0xc]
        jnz     l_xor_check_ok
        mov     eax, 0x80004005
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

l_xor_check_ok:
        mov     eax, dword ptr [eax]
        xor     eax, 0x85739531
        mov     esi, dword ptr [eax + 0x50]
        test    esi, esi
        jnz     l_mission_params_ok
        push    0x77ec8c
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      l_mission_params_ok
        int     3

l_mission_params_ok:
        mov     eax, dword ptr [esi + 0x74]
        test    eax, eax
        mov dword ptr [DAT_007eebc0], eax
        jnz     l_stats_ptr_ok
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

l_stats_ptr_ok:
        push    0x77ec84
        mov dword ptr [DAT_007eebc8], 0x0
        mov dword ptr [DAT_007eebcc], 0x0
        call    FUN_006fc4d0
        test    al, al
        mov     dword ptr [ebp - 0x4], 0x77ec78
        jnz     l_stats_ok
        mov     dword ptr [ebp - 0x4], 0x77ec74

l_stats_ok:
        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        mov ebx, dword ptr [DAT_007dab40]
        mov     esi, dword ptr [esi + 0xa4]
        mov edi, dword ptr [DAT_0076b3e8]
        xor     edx, ebx
        mov     ecx, dword ptr [edx + 0xc]
        mov ebx, dword ptr [DAT_0076b3e0]
        lea     eax, [edx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx + 0xa8]
        test    edx, edx
        jz      l_no_map_name
        mov     edx, dword ptr [eax]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx + 0xa8]
        push    0x100
        push    eax
        lea     ecx, [ebp - 0x404]
        push    ecx
        call    edi
        add     esp, 0xc
        jmp     l_map_name_done

l_no_map_name:
        lea     edx, [ebp - 0x404]
        push    0x77ec5c
        push    edx
        call    ebx
        add     esp, 0x8

l_map_name_done:
        mov eax, dword ptr [DAT_007dab44]
        mov ecx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [eax]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x14]
        xor     ecx, 0x85739531
        jz      l_no_host_name
        mov     ecx, dword ptr [eax + 0x14]
        xor     ecx, 0x85739531
        call    FUN_004cc9f0
        test    eax, eax
        jz      l_no_host_name
        mov edx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [edx]
        xor eax, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax + 0x14]
        push    0x100
        xor     ecx, 0x85739531
        call    FUN_004cc9f0
        push    eax
        lea     eax, [ebp - 0x204]
        push    eax
        call    edi
        add     esp, 0xc
        jmp     l_host_name_done

l_no_host_name:
        lea     ecx, [ebp - 0x204]
        push    0x77ec40
        push    ecx
        call    ebx
        add     esp, 0x8

l_host_name_done:
        push    0x100
        lea     edx, [ebp - 0x604]
        push    0x773040
        push    edx
        call    edi
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [ecx + 0xc]
        push    ecx
        xor     edx, 0x85739531
        add     edx, 0x239dcc
        mov     ecx, dword ptr [edx]
        mov     eax, esp
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [edx + 0x4]
        mov     dword ptr [eax + 0x4], ecx
        mov     ecx, dword ptr [edx + 0x8]
        mov     edx, dword ptr [edx + 0xc]
        mov     dword ptr [eax + 0x8], ecx
        mov     dword ptr [eax + 0xc], edx
        lea     eax, [ebp - 0x604]
        push    eax
        mov     eax, dword ptr [ebp - 0x4]
        lea     ecx, [ebp - 0x204]
        push    ecx
        lea     edx, [ebp - 0x404]
        push    edx
        push    esi
        push    eax
        call dword ptr [DAT_007eebd8]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }


}
