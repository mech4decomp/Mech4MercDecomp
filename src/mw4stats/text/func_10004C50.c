/* FUN_10004C50 - __stdcall, 477 bytes
 * SEH prologue. Builds a settings object (FUN_10006740/FUN_10006840),
 * on failure cleans up and returns. Else FUN_10006c40 then registers 18
 * named settings via FUN_10004e30/FUN_100048e0, then cleans up. */

extern int __cdecl FUN_10006740(void);
extern int __cdecl FUN_10006840(void);
extern void __cdecl FUN_100067d0(void);
extern void *__cdecl FUN_10006c40(void);
extern void __cdecl FUN_10004e30(void);
extern void __cdecl FUN_100048e0(void);

__declspec(naked) void FUN_10004C50(void)
{
    __asm {
        push -0x1
        push 0x1001f548
        mov  eax, dword ptr fs:[0]
        push eax
        mov  dword ptr fs:[0], esp
        sub  esp, 0x8
        push esi
        mov  esi, ecx
        push 0x3
        lea  ecx, [esp + 0x8]
        call FUN_10006740
        mov  eax, dword ptr [esp + 0x1c]
        push eax
        lea  ecx, [esp + 0x8]
        mov  dword ptr [esp + 0x18], 0x0
        call FUN_10006840
        test eax, eax
        jge  L_b3
        lea  ecx, [esp + 0x4]
        mov  dword ptr [esp + 0x14], 0xffffffff
        call FUN_100067d0
        pop  esi
        mov  ecx, dword ptr [esp + 0x8]
        mov  dword ptr fs:[0], ecx
        add  esp, 0x14
        ret  0x4
L_b3:
        push edi
        lea  ecx, [esp + 0x8]
        call FUN_10006c40
        lea  ecx, [esi + 0x8]
        push ecx
        mov  edi, eax
        push 0x100248bc
        push edi
        call FUN_10004e30
        lea  edx, [esi + 0xa0]
        push edx
        push 0x100248d4
        push edi
        call FUN_10004e30
        lea  eax, [esi + 0x138]
        push eax
        push 0x100248f4
        push edi
        call FUN_10004e30
        lea  ecx, [esi + 0x1d0]
        push ecx
        push 0x10024910
        push edi
        call FUN_10004e30
        lea  edx, [esi + 0x268]
        push edx
        push 0x10024938
        push edi
        call FUN_10004e30
        lea  eax, [esi + 0x300]
        push eax
        push 0x10024954
        push edi
        call FUN_10004e30
        add  esp, 0x48
        lea  ecx, [esi + 0x398]
        push ecx
        push 0x1002496c
        push edi
        call FUN_100048e0
        lea  edx, [esi + 0x39c]
        push edx
        push 0x10024994
        push edi
        call FUN_10004e30
        lea  eax, [esi + 0x434]
        push eax
        push 0x100249b0
        push edi
        call FUN_10004e30
        lea  ecx, [esi + 0x4cc]
        push ecx
        push 0x100249d0
        push edi
        call FUN_10004e30
        lea  edx, [esi + 0x564]
        push edx
        push 0x100249f4
        push edi
        call FUN_10004e30
        lea  eax, [esi + 0x5fc]
        push eax
        push 0x10024a10
        push edi
        call FUN_10004e30
        add  esp, 0x48
        lea  ecx, [esi + 0x694]
        push ecx
        push 0x10024a2c
        push edi
        call FUN_10004e30
        lea  edx, [esi + 0x72c]
        push edx
        push 0x10024a60
        push edi
        call FUN_10004e30
        lea  eax, [esi + 0x7c4]
        push eax
        push 0x10024a84
        push edi
        call FUN_10004e30
        lea  ecx, [esi + 0x85c]
        push ecx
        push 0x10024aa0
        push edi
        call FUN_10004e30
        lea  edx, [esi + 0x8f4]
        push edx
        push 0x10024ac4
        push edi
        call FUN_10004e30
        add  esi, 0x98c
        push esi
        push 0x10024adc
        push edi
        call FUN_10004e30
        add  esp, 0x48
        lea  ecx, [esp + 0x8]
        mov  dword ptr [esp + 0x18], 0xffffffff
        call FUN_100067d0
        mov  ecx, dword ptr [esp + 0x10]
        pop  edi
        pop  esi
        mov  dword ptr fs:[0], ecx
        add  esp, 0x14
        ret  0x4
    }
}
