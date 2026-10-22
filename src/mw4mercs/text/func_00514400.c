/* func_00514400.c -- in-.text data block (block 0x513F1F), 403 bytes.
   Three functions: two small wrappers calling FUN_004D5B70, and a
   dispatcher that calls FUN_00709F20 with different resolution/size args. */

extern int g_7dab44;
extern int g_7dab40;
extern unsigned char g_858957;
extern unsigned char g_858956;
extern unsigned char g_858955;
extern int g_85894c;
extern int g_858948;

extern void FUN_004D5B70(void);
extern void FUN_00709F20(void);

__declspec(naked) void func_00514400(void)
{
    __asm {
        sub esp, 0x14
        mov ecx, dword ptr [g_7dab44]
        xor eax, eax
        mov dword ptr [esp + 8], eax
        mov dword ptr [esp + 0xc], eax
        mov dword ptr [esp + 0x10], eax
        __emit 0xC7  /* mov dword ptr [esp],0x14 -- MSVC6 drops 00 disp byte (C7 04 24) */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        __emit 0x14
        __emit 0x00
        __emit 0x00
        __emit 0x00
        mov dword ptr [esp + 4], 2
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        __emit 0x8D  /* lea eax,[esp] -- MSVC6 drops 00 disp byte (8D 04 24) */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        push eax
        xor ecx, 0x85739531
        call FUN_004D5B70
        mov eax, 1
        add esp, 0x14
        ret 0xc
        nop
        nop
        nop
        sub esp, 0x14
        mov ecx, dword ptr [g_7dab44]
        xor eax, eax
        mov dword ptr [esp + 8], eax
        mov dword ptr [esp + 0xc], eax
        mov dword ptr [esp + 0x10], eax
        __emit 0xC7  /* mov dword ptr [esp],0x14 -- MSVC6 drops 00 disp byte (C7 04 24) */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        __emit 0x14
        __emit 0x00
        __emit 0x00
        __emit 0x00
        mov dword ptr [esp + 4], 3
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        __emit 0x8D  /* lea eax,[esp] -- MSVC6 drops 00 disp byte (8D 04 24) */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        push eax
        xor ecx, 0x85739531
        call FUN_004D5B70
        mov eax, 1
        add esp, 0x14
        ret 0xc
        nop
        nop
        nop
        mov eax, dword ptr [esp + 0xc]
        mov eax, dword ptr [eax]
        sub eax, 0
        je L_51454b
        dec eax
        je L_514503
        dec eax
        je L_5144ba
        xor eax, eax
        ret 0xc
L_5144ba:
        push 0
        push 0
        push 0
        push 0
        xor ecx, ecx
        mov cl, byte ptr [g_858957]
        xor edx, edx
        mov dl, byte ptr [g_858956]
        push 0
        xor eax, eax
        mov al, byte ptr [g_858955]
        push ecx
        mov ecx, dword ptr [g_85894c]
        push edx
        mov edx, dword ptr [g_858948]
        push eax
        push ecx
        push edx
        push 0x300
        push 0x400
        call FUN_00709F20
        mov eax, 1
        ret 0xc
L_514503:
        push 0
        push 0
        push 0
        push 0
        xor eax, eax
        mov al, byte ptr [g_858957]
        xor ecx, ecx
        mov cl, byte ptr [g_858956]
        push 0
        xor edx, edx
        mov dl, byte ptr [g_858955]
        push eax
        mov eax, dword ptr [g_85894c]
        push ecx
        mov ecx, dword ptr [g_858948]
        push edx
        push eax
        push ecx
        push 0x258
        push 0x320
        call FUN_00709F20
        mov eax, 1
        ret 0xc
L_51454b:
        push 0
        push 0
        push 0
        push 0
        xor edx, edx
        mov dl, byte ptr [g_858957]
        xor eax, eax
        mov al, byte ptr [g_858956]
        push 0
        xor ecx, ecx
        mov cl, byte ptr [g_858955]
        push edx
        mov edx, dword ptr [g_85894c]
        push eax
        mov eax, dword ptr [g_858948]
        push ecx
        push edx
        push eax
        push 0x1e0
        push 0x280
        call FUN_00709F20
        mov eax, 1
        ret 0xc
    }
}
