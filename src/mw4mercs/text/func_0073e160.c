/*
 * FUN_0073e160 (extent 0x73e160-0x73f71c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b138;
extern int    g_008aac74;

__declspec(naked) void FUN_0073e160(void)
{
    __asm {
        sub    esp, 0x100
        push    ebx
        mov    ebx, dword ptr [esp + 0x108]
        cmp    ebx, 0x887602c9
        jg    L_eb75
        je    L_eb66
        cmp    ebx, 0x887601ae
        jg    L_e72c
        je    L_e71d
        cmp    ebx, 0x887600a0
        jg    L_e4f0
        je    L_e4e1
        cmp    ebx, 0x80040406
        jg    L_e376
        je    L_e367
        cmp    ebx, 0x80040207
        jg    L_e29f
        je    L_e290
        cmp    ebx, 0x80040203
        jg    L_e247
        je    L_e238
        cmp    ebx, 0x80040201
        jg    L_e21d
        je    L_e20e
        cmp    ebx, 0x8000000a
        je    L_e1ff
        cmp    ebx, 0x80040200
        jne    L_f5c7
        mov    eax, 0x7a8db4
        pop    ebx
        add    esp, 0x100
        ret    4
L_e1ff:
        mov    eax, 0x7a8da8
        pop    ebx
        add    esp, 0x100
        ret    4
L_e20e:
        mov    eax, 0x7a8d94
        pop    ebx
        add    esp, 0x100
        ret    4
L_e21d:
        cmp    ebx, 0x80040202
        jne    L_f5c7
        mov    eax, 0x7a8d84
        pop    ebx
        add    esp, 0x100
        ret    4
L_e238:
        mov    eax, 0x7a8d70
        pop    ebx
        add    esp, 0x100
        ret    4
L_e247:
        cmp    ebx, 0x80040204
        je    L_e281
        cmp    ebx, 0x80040205
        je    L_e272
        cmp    ebx, 0x80040206
        jne    L_f5c7
        mov    eax, 0x7a8d58
        pop    ebx
        add    esp, 0x100
        ret    4
L_e272:
        mov    eax, 0x7a8d3c
        pop    ebx
        add    esp, 0x100
        ret    4
L_e281:
        mov    eax, 0x7a8d28
        pop    ebx
        add    esp, 0x100
        ret    4
L_e290:
        mov    eax, 0x7a8d14
        pop    ebx
        add    esp, 0x100
        ret    4
L_e29f:
        cmp    ebx, 0x80040402
        jg    L_e31e
        je    L_e30f
        cmp    ebx, 0x8004020a
        jg    L_e2f4
        je    L_e2e5
        cmp    ebx, 0x80040208
        je    L_e2d6
        cmp    ebx, 0x80040209
        jne    L_f5c7
        mov    eax, 0x7a8d04
        pop    ebx
        add    esp, 0x100
        ret    4
L_e2d6:
        mov    eax, 0x7a8cf0
        pop    ebx
        add    esp, 0x100
        ret    4
L_e2e5:
        mov    eax, 0x7a8cdc
        pop    ebx
        add    esp, 0x100
        ret    4
L_e2f4:
        cmp    ebx, 0x80040401
        jne    L_f5c7
        mov    eax, 0x7a8cc8
        pop    ebx
        add    esp, 0x100
        ret    4
L_e30f:
        mov    eax, 0x7a8cb8
        pop    ebx
        add    esp, 0x100
        ret    4
L_e31e:
        cmp    ebx, 0x80040403
        je    L_e358
        cmp    ebx, 0x80040404
        je    L_e349
        cmp    ebx, 0x80040405
        jne    L_f5c7
        mov    eax, 0x7a8ca4
        pop    ebx
        add    esp, 0x100
        ret    4
L_e349:
        mov    eax, 0x7a8c94
        pop    ebx
        add    esp, 0x100
        ret    4
L_e358:
        mov    eax, 0x7a8c84
        pop    ebx
        add    esp, 0x100
        ret    4
L_e367:
        mov    eax, 0x7a8c78
        pop    ebx
        add    esp, 0x100
        ret    4
L_e376:
        cmp    ebx, 0x88760037
        jg    L_e44b
        je    L_e43c
        cmp    ebx, 0x88760005
        jg    L_e3f3
        je    L_e3e4
        lea    eax, [ebx + 0x7ffbfbf9]
        cmp    eax, 3
        ja    L_f5c7
        jmp    dword ptr [eax*4 + 0x73f71c]
        mov    eax, 0x7a8c68
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8c4c
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8c34
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8c24
        pop    ebx
        add    esp, 0x100
        ret    4
L_e3e4:
        mov    eax, 0x7a8c08
        pop    ebx
        add    esp, 0x100
        ret    4
L_e3f3:
        cmp    ebx, 0x8876000a
        je    L_e42d
        cmp    ebx, 0x88760014
        je    L_e41e
        cmp    ebx, 0x88760028
        jne    L_f5c7
        mov    eax, 0x7a8bf0
        pop    ebx
        add    esp, 0x100
        ret    4
L_e41e:
        mov    eax, 0x7a8bd4
        pop    ebx
        add    esp, 0x100
        ret    4
L_e42d:
        mov    eax, 0x7a8bb8
        pop    ebx
        add    esp, 0x100
        ret    4
L_e43c:
        mov    eax, 0x7a8ba8
        pop    ebx
        add    esp, 0x100
        ret    4
L_e44b:
        lea    eax, [ebx + 0x7789ffa6]
        cmp    eax, 0x3c
        ja    L_f5c7
        xor    ecx, ecx
        mov    cl, byte ptr [eax + 0x73f750]
        jmp    dword ptr [ecx*4 + 0x73f72c]
        mov    eax, 0x7a8b94
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8b78
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8b64
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8b4c
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8b38
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8b24
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8b08
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8af4
        pop    ebx
        add    esp, 0x100
        ret    4
L_e4e1:
        mov    eax, 0x7a8adc
        pop    ebx
        add    esp, 0x100
        ret    4
L_e4f0:
        lea    eax, [ebx + 0x7789ff56]
        cmp    eax, 0xfa
        ja    L_f5c7
        xor    edx, edx
        mov    dl, byte ptr [eax + 0x73f820]
        jmp    dword ptr [edx*4 + 0x73f790]
        mov    eax, 0x7a8ad0
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8ac0
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8aa8
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8a94
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8a80
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8a6c
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8a50
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8a3c
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8a28
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8a0c
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a89f4
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a89e4
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a89d8
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a89c4
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a89b4
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a89a0
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8988
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8974
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8960
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a894c
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8938
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8920
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a890c
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a88f8
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a88e8
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a88d4
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a88c0
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a88b0
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8898
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8880
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a885c
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8848
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8830
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8810
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a87f0
        pop    ebx
        add    esp, 0x100
        ret    4
L_e71d:
        mov    eax, 0x7a87dc
        pop    ebx
        add    esp, 0x100
        ret    4
L_e72c:
        lea    eax, [ebx + 0x7789fe4d]
        cmp    eax, 0x115
        ja    L_f5c7
        xor    ecx, ecx
        mov    cl, byte ptr [eax + 0x73fa38]
        jmp    dword ptr [ecx*4 + 0x73f91c]
        mov    eax, 0x7a87c4
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a87ac
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8794
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8780
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8768
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8748
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8728
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a870c
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a86f4
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a86dc
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a86c8
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a86ac
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8698
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8684
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8670
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8658
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8640
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a862c
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a860c
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a85f4
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a85d4
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a85c4
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a85a8
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8588
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8570
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a854c
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8538
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8520
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8504
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a84ec
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a84dc
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a84c4
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a84ac
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8494
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8480
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8468
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8458
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8444
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a842c
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8418
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8400
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a83e4
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a83c4
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a83b0
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a839c
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a838c
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8378
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a836c
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a835c
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8344
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8330
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8318
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8304
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a82e8
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a82d4
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a82c4
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a82b0
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8294
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a827c
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8264
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8250
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8238
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8224
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8214
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8204
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a81f0
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a81e0
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a81c8
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a81b0
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8190
        pop    ebx
        add    esp, 0x100
        ret    4
L_eb66:
        mov    eax, 0x7a8170
        pop    ebx
        add    esp, 0x100
        ret    4
L_eb75:
        cmp    ebx, 0x88760800
        jg    L_ee4f
        je    L_ee40
        lea    eax, [ebx + 0x7789fd36]
        cmp    eax, 0x3d
        ja    L_f5c7
        jmp    dword ptr [eax*4 + 0x73fb50]
        mov    eax, 0x7a8158
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a813c
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8124
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8104
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a80e8
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a80c8
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a80a8
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a808c
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a806c
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8050
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8034
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a801c
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a8000
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7fe0
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7fc4
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7fa4
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7f84
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7f64
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7f44
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7f24
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7f08
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7eec
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7ed4
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7eb8
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7e98
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7e78
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7e58
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7e38
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7e20
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7e00
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7de0
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7dc4
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7dac
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7d94
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7d74
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7d5c
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7d40
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7d24
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7d0c
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7cfc
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7ce8
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7cd4
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7cb8
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7c9c
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7c80
        pop    ebx
        add    esp, 0x100
        ret    4
L_ee40:
        mov    eax, 0x7a7c64
        pop    ebx
        add    esp, 0x100
        ret    4
L_ee4f:
        cmp    ebx, 0x88770118
        jg    L_f1be
        je    L_f1af
        cmp    ebx, 0x88770005
        jg    L_f008
        je    L_eff9
        lea    eax, [ebx + 0x7789f7fe]
        cmp    eax, 0x34
        ja    L_f5c7
        xor    edx, edx
        mov    dl, byte ptr [eax + 0x73fcac]
        jmp    dword ptr [edx*4 + 0x73fc48]
        mov    eax, 0x7a7c4c
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7c2c
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7c10
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7bf4
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7bd4
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7bb8
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7b98
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7b7c
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7b58
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7b3c
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7b18
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7afc
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7ae0
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7ac0
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7aa0
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7a80
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7a60
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7a44
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7a2c
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7a14
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a79f0
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a79d4
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a79b8
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a799c
        pop    ebx
        add    esp, 0x100
        ret    4
L_eff9:
        mov    eax, 0x7a7980
        pop    ebx
        add    esp, 0x100
        ret    4
L_f008:
        cmp    ebx, 0x88770096
        jg    L_f0ec
        je    L_f0dd
        lea    eax, [ebx + 0x7788fff6]
        cmp    eax, 0x78
        ja    L_f5c7
        xor    ecx, ecx
        mov    cl, byte ptr [eax + 0x73fd14]
        jmp    dword ptr [ecx*4 + 0x73fce4]
        mov    eax, 0x7a796c
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7958
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7940
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a792c
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7914
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a78fc
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a78e4
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a78c8
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a78b8
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a78a4
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7890
        pop    ebx
        add    esp, 0x100
        ret    4
L_f0dd:
        mov    eax, 0x7a787c
        pop    ebx
        add    esp, 0x100
        ret    4
L_f0ec:
        lea    eax, [ebx + 0x7788ff65]
        cmp    eax, 0x73
        ja    L_f5c7
        xor    edx, edx
        mov    dl, byte ptr [eax + 0x73fdc0]
        jmp    dword ptr [edx*4 + 0x73fd90]
        mov    eax, 0x7a7868
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7858
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7844
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7830
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7818
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7808
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a77f4
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a77e0
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a77d0
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a77bc
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a77b0
        pop    ebx
        add    esp, 0x100
        ret    4
L_f1af:
        mov    eax, 0x7a779c
        pop    ebx
        add    esp, 0x100
        ret    4
L_f1be:
        cmp    ebx, 0x8877044c
        jg    L_f3c6
        je    L_f3b7
        cmp    ebx, 0x88770190
        jg    L_f2b4
        je    L_f2a5
        lea    eax, [ebx + 0x7788fede]
        cmp    eax, 0x64
        ja    L_f5c7
        xor    ecx, ecx
        mov    cl, byte ptr [eax + 0x73fe64]
        jmp    dword ptr [ecx*4 + 0x73fe34]
        mov    eax, 0x7a7780
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a776c
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7758
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7744
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7730
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7718
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7704
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a76ec
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a76d4
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a76c0
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a76a8
        pop    ebx
        add    esp, 0x100
        ret    4
L_f2a5:
        mov    eax, 0x7a7694
        pop    ebx
        add    esp, 0x100
        ret    4
L_f2b4:
        cmp    ebx, 0x88770406
        jg    L_f34e
        je    L_f33f
        cmp    ebx, 0x887703e8
        jg    L_f30d
        je    L_f2fe
        cmp    ebx, 0x8877019a
        je    L_f2ef
        cmp    ebx, 0x887701a4
        jne    L_f5c7
        mov    eax, 0x7a7684
        pop    ebx
        add    esp, 0x100
        ret    4
L_f2ef:
        mov    eax, 0x7a7674
        pop    ebx
        add    esp, 0x100
        ret    4
L_f2fe:
        mov    eax, 0x7a765c
        pop    ebx
        add    esp, 0x100
        ret    4
L_f30d:
        cmp    ebx, 0x887703f2
        je    L_f330
        cmp    ebx, 0x887703fc
        jne    L_f5c7
        mov    eax, 0x7a7648
        pop    ebx
        add    esp, 0x100
        ret    4
L_f330:
        mov    eax, 0x7a7630
        pop    ebx
        add    esp, 0x100
        ret    4
L_f33f:
        mov    eax, 0x7a7618
        pop    ebx
        add    esp, 0x100
        ret    4
L_f34e:
        lea    eax, [ebx + 0x7788fbf0]
        cmp    eax, 0x32
        ja    L_f5c7
        xor    edx, edx
        mov    dl, byte ptr [eax + 0x73fee4]
        jmp    dword ptr [edx*4 + 0x73fecc]
        mov    eax, 0x7a7600
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a75e4
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a75d0
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a75b4
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a759c
        pop    ebx
        add    esp, 0x100
        ret    4
L_f3b7:
        mov    eax, 0x7a7588
        pop    ebx
        add    esp, 0x100
        ret    4
L_f3c6:
        cmp    ebx, 0x88780032
        jg    L_f4e6
        je    L_f4d7
        cmp    ebx, 0x88770802
        jg    L_f45a
        je    L_f44b
        lea    eax, [ebx + 0x7788f830]
        cmp    eax, 0x28
        ja    L_f5c7
        xor    ecx, ecx
        mov    cl, byte ptr [eax + 0x73ff30]
        jmp    dword ptr [ecx*4 + 0x73ff18]
        mov    eax, 0x7a756c
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7558
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7540
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a752c
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a750c
        pop    ebx
        add    esp, 0x100
        ret    4
L_f44b:
        mov    eax, 0x7a74ec
        pop    ebx
        add    esp, 0x100
        ret    4
L_f45a:
        cmp    ebx, 0x88770820
        jg    L_f4a5
        je    L_f496
        cmp    ebx, 0x8877080c
        je    L_f487
        cmp    ebx, 0x88770816
        jne    L_f5c7
        mov    eax, 0x7a74d8
        pop    ebx
        add    esp, 0x100
        ret    4
L_f487:
        mov    eax, 0x7a74c4
        pop    ebx
        add    esp, 0x100
        ret    4
L_f496:
        mov    eax, 0x7a74b0
        pop    ebx
        add    esp, 0x100
        ret    4
L_f4a5:
        cmp    ebx, 0x8878000a
        je    L_f4c8
        cmp    ebx, 0x8878001e
        jne    L_f5c7
        mov    eax, 0x7a7498
        pop    ebx
        add    esp, 0x100
        ret    4
L_f4c8:
        mov    eax, 0x7a7488
        pop    ebx
        add    esp, 0x100
        ret    4
L_f4d7:
        mov    eax, 0x7a7474
        pop    ebx
        add    esp, 0x100
        ret    4
L_f4e6:
        cmp    ebx, 0x887800a0
        jg    L_f568
        je    L_f559
        lea    eax, [ebx + 0x7787ffba]
        cmp    eax, 0x50
        ja    L_f5c7
        xor    edx, edx
        mov    dl, byte ptr [eax + 0x73ff74]
        jmp    dword ptr [edx*4 + 0x73ff5c]
        mov    eax, 0x7a745c
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a744c
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a743c
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a7420
        pop    ebx
        add    esp, 0x100
        ret    4
        mov    eax, 0x7a740c
        pop    ebx
        add    esp, 0x100
        ret    4
L_f559:
        mov    eax, 0x7a73f4
        pop    ebx
        add    esp, 0x100
        ret    4
L_f568:
        cmp    ebx, 0x40002
        jg    L_f5af
        je    L_f5a0
        cmp    ebx, 0x887800aa
        je    L_f591
        cmp    ebx, 0x40001
        jne    L_f5c7
        mov    eax, 0x7a73e4
        pop    ebx
        add    esp, 0x100
        ret    4
L_f591:
        mov    eax, 0x7a73d0
        pop    ebx
        add    esp, 0x100
        ret    4
L_f5a0:
        mov    eax, 0x7a73c0
        pop    ebx
        add    esp, 0x100
        ret    4
L_f5af:
        cmp    ebx, 0x40003
        je    L_f70c
        cmp    ebx, 0x878000a
        je    L_f6fd
L_f5c7:
        push    esi
        push    edi
        push    0x200
        lea    eax, [esp + 0x10]
        push    eax
        push    ebx
        call    dword ptr [g_008aac74]
        test    eax, eax
        mov    edi, 0x7a73b8
        je    L_f62f
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        sub    edi, ecx
        mov    edx, ecx
        shr    ecx, 2
        mov    esi, edi
        mov    edi, 0x8abae8
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        or    ecx, 0xffffffff
        lea    edi, [esp + 0xc]
        repne scasb
        not    ecx
        sub    edi, ecx
        mov    edx, ecx
        or    ecx, 0xffffffff
        mov    esi, edi
        mov    edi, 0x8abae8
        repne scasb
        mov    ecx, edx
        shr    ecx, 2
        dec    edi
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        jmp    L_f68e
L_f62f:
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        sub    edi, ecx
        mov    eax, ecx
        shr    ecx, 2
        mov    esi, edi
        mov    edi, 0x8abae8
        rep movsd
        mov    ecx, eax
        and    ecx, 3
        rep movsb
        or    ecx, 0xffffffff
        xor    eax, eax
        mov    edi, 0x8abae8
        repne scasb
        not    ecx
        dec    ecx
        mov    edx, 0x200
        sub    edx, ecx
        or    ecx, 0xffffffff
        mov    edi, 0x8abae8
        repne scasb
        push    0
        not    ecx
        push    edx
        dec    ecx
        add    ecx, 0x8abae8
        push    ecx
        push    0x400
        push    ebx
        push    eax
        push    0x1000
        call    dword ptr [g_0076b138]
L_f68e:
        or    ecx, 0xffffffff
        xor    eax, eax
        mov    edx, 0x8abae8
        sub    edx, 2
        mov    edi, 0x8abae8
        repne scasb
        not    ecx
        mov    al, byte ptr [ecx + edx - 1]
        dec    ecx
        cmp    al, 0xd
        jne    L_f6bf
        or    ecx, 0xffffffff
        xor    eax, eax
        mov    edi, 0x8abae8
        repne scasb
        not    ecx
        dec    ecx
        mov    byte ptr [ecx + edx], al
L_f6bf:
        or    ecx, 0xffffffff
        xor    eax, eax
        mov    edi, 0x8abae8
        repne scasb
        not    ecx
        mov    al, byte ptr [ecx + 0x8abae6]
        dec    ecx
        cmp    al, 0xd
        jne    L_f6ec
        or    ecx, 0xffffffff
        xor    eax, eax
        mov    edi, 0x8abae8
        repne scasb
        not    ecx
        mov    byte ptr [ecx + 0x8abae6], al
L_f6ec:
        pop    edi
        pop    esi
        mov    eax, 0x8abae8
        pop    ebx
        add    esp, 0x100
        ret    4
L_f6fd:
        mov    eax, 0x7a73a0
        pop    ebx
        add    esp, 0x100
        ret    4
L_f70c:
        mov    eax, 0x7a738c
        pop    ebx
        add    esp, 0x100
        ret    4
        nop    
        // jump-table data @ 0x0073F71C (4 relocated pointers)
        __emit 0xA8
        __emit 0xE3
        __emit 0x73
        __emit 0x00
        __emit 0xB7
        __emit 0xE3
        __emit 0x73
        __emit 0x00
        __emit 0xC6
        __emit 0xE3
        __emit 0x73
        __emit 0x00
        __emit 0xD5
        __emit 0xE3
        __emit 0x73
        __emit 0x00
        // jump-table data @ 0x0073F72C (16 relocated pointers)
        __emit 0x69
        __emit 0xE4
        __emit 0x73
        __emit 0x00
        __emit 0x78
        __emit 0xE4
        __emit 0x73
        __emit 0x00
        __emit 0x87
        __emit 0xE4
        __emit 0x73
        __emit 0x00
        __emit 0x96
        __emit 0xE4
        __emit 0x73
        __emit 0x00
        __emit 0xA5
        __emit 0xE4
        __emit 0x73
        __emit 0x00
        __emit 0xB4
        __emit 0xE4
        __emit 0x73
        __emit 0x00
        __emit 0xC3
        __emit 0xE4
        __emit 0x73
        __emit 0x00
        __emit 0xD2
        __emit 0xE4
        __emit 0x73
        __emit 0x00
        __emit 0xC7
        __emit 0xF5
        __emit 0x73
        __emit 0x00
        __emit 0x00
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x01
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x02
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x03
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        // jump-table data @ 0x0073F790 (16 relocated pointers)
        __emit 0x08
        __emit 0x08
        __emit 0x04
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x05
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x06
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x07
        __emit 0x8D
        __emit 0x49
        __emit 0x00
        __emit 0x10
        __emit 0xE5
        __emit 0x73
        __emit 0x00
        __emit 0x1F
        __emit 0xE5
        __emit 0x73
        __emit 0x00
        __emit 0x2E
        __emit 0xE5
        __emit 0x73
        __emit 0x00
        __emit 0x3D
        __emit 0xE5
        __emit 0x73
        __emit 0x00
        __emit 0x4C
        __emit 0xE5
        __emit 0x73
        __emit 0x00
        __emit 0x5B
        __emit 0xE5
        __emit 0x73
        __emit 0x00
        __emit 0x6A
        __emit 0xE5
        __emit 0x73
        __emit 0x00
        // jump-table data @ 0x0073F91C (16 relocated pointers)
        __emit 0x79
        __emit 0xE5
        __emit 0x73
        __emit 0x00
        __emit 0x88
        __emit 0xE5
        __emit 0x73
        __emit 0x00
        __emit 0x97
        __emit 0xE5
        __emit 0x73
        __emit 0x00
        __emit 0xA6
        __emit 0xE5
        __emit 0x73
        __emit 0x00
        __emit 0xB5
        __emit 0xE5
        __emit 0x73
        __emit 0x00
        __emit 0xC4
        __emit 0xE5
        __emit 0x73
        __emit 0x00
        __emit 0xD3
        __emit 0xE5
        __emit 0x73
        __emit 0x00
        __emit 0xE2
        __emit 0xE5
        __emit 0x73
        __emit 0x00
        __emit 0xF1
        __emit 0xE5
        __emit 0x73
        __emit 0x00
        __emit 0x00
        __emit 0xE6
        __emit 0x73
        __emit 0x00
        __emit 0x0F
        __emit 0xE6
        __emit 0x73
        __emit 0x00
        __emit 0x1E
        __emit 0xE6
        __emit 0x73
        __emit 0x00
        __emit 0x2D
        __emit 0xE6
        __emit 0x73
        __emit 0x00
        __emit 0x3C
        __emit 0xE6
        __emit 0x73
        __emit 0x00
        __emit 0x4B
        __emit 0xE6
        __emit 0x73
        __emit 0x00
        __emit 0x5A
        __emit 0xE6
        __emit 0x73
        __emit 0x00
        // jump-table data @ 0x0073FB50 (16 relocated pointers)
        __emit 0x69
        __emit 0xE6
        __emit 0x73
        __emit 0x00
        __emit 0x78
        __emit 0xE6
        __emit 0x73
        __emit 0x00
        __emit 0x87
        __emit 0xE6
        __emit 0x73
        __emit 0x00
        __emit 0x96
        __emit 0xE6
        __emit 0x73
        __emit 0x00
        __emit 0xA5
        __emit 0xE6
        __emit 0x73
        __emit 0x00
        __emit 0xB4
        __emit 0xE6
        __emit 0x73
        __emit 0x00
        __emit 0xC3
        __emit 0xE6
        __emit 0x73
        __emit 0x00
        __emit 0xD2
        __emit 0xE6
        __emit 0x73
        __emit 0x00
        __emit 0xE1
        __emit 0xE6
        __emit 0x73
        __emit 0x00
        __emit 0xF0
        __emit 0xE6
        __emit 0x73
        __emit 0x00
        __emit 0xFF
        __emit 0xE6
        __emit 0x73
        __emit 0x00
        __emit 0x0E
        __emit 0xE7
        __emit 0x73
        __emit 0x00
        __emit 0xC7
        __emit 0xF5
        __emit 0x73
        __emit 0x00
        __emit 0x00
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x01
        __emit 0x02
        // jump-table data @ 0x0073FC48 (16 relocated pointers)
        __emit 0x03
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x04
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x05
        __emit 0x23
        __emit 0x06
        __emit 0x23
        __emit 0x23
        __emit 0x07
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x08
        __emit 0x23
        __emit 0x09
        __emit 0x23
        __emit 0x23
        __emit 0x0A
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x0B
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x0C
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        // jump-table data @ 0x0073FCE4 (16 relocated pointers)
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x0D
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x0E
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x0F
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x10
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x11
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x12
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        // jump-table data @ 0x0073FD90 (16 relocated pointers)
        __emit 0x13
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x14
        __emit 0x15
        __emit 0x23
        __emit 0x23
        __emit 0x16
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x17
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x18
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x19
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x1A
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x1B
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        // jump-table data @ 0x0073FE34 (16 relocated pointers)
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x1C
        __emit 0x23
        __emit 0x1D
        __emit 0x23
        __emit 0x1E
        __emit 0x23
        __emit 0x23
        __emit 0x1F
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x20
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x21
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x23
        __emit 0x22
        __emit 0x90
        __emit 0xC4
        __emit 0xE7
        __emit 0x73
        __emit 0x00
        __emit 0xD3
        __emit 0xE7
        __emit 0x73
        __emit 0x00
        __emit 0xE2
        __emit 0xE7
        __emit 0x73
        __emit 0x00
        __emit 0xF1
        __emit 0xE7
        __emit 0x73
        __emit 0x00
        // jump-table data @ 0x0073FECC (16 relocated pointers)
        __emit 0x00
        __emit 0xE8
        __emit 0x73
        __emit 0x00
        __emit 0x0F
        __emit 0xE8
        __emit 0x73
        __emit 0x00
        __emit 0x1E
        __emit 0xE8
        __emit 0x73
        __emit 0x00
        __emit 0x2D
        __emit 0xE8
        __emit 0x73
        __emit 0x00
        __emit 0x3C
        __emit 0xE8
        __emit 0x73
        __emit 0x00
        __emit 0x4B
        __emit 0xE8
        __emit 0x73
        __emit 0x00
        __emit 0x5A
        __emit 0xE8
        __emit 0x73
        __emit 0x00
        __emit 0x69
        __emit 0xE8
        __emit 0x73
        __emit 0x00
        __emit 0x78
        __emit 0xE8
        __emit 0x73
        __emit 0x00
        __emit 0x87
        __emit 0xE8
        __emit 0x73
        __emit 0x00
        __emit 0x96
        __emit 0xE8
        __emit 0x73
        __emit 0x00
        __emit 0xA5
        __emit 0xE8
        __emit 0x73
        __emit 0x00
        __emit 0xB4
        __emit 0xE8
        __emit 0x73
        __emit 0x00
        __emit 0xC3
        __emit 0xE8
        __emit 0x73
        __emit 0x00
        __emit 0xD2
        __emit 0xE8
        __emit 0x73
        __emit 0x00
        __emit 0xE1
        __emit 0xE8
        __emit 0x73
        __emit 0x00
        // jump-table data @ 0x0073FF18 (16 relocated pointers)
        __emit 0xF0
        __emit 0xE8
        __emit 0x73
        __emit 0x00
        __emit 0xFF
        __emit 0xE8
        __emit 0x73
        __emit 0x00
        __emit 0x0E
        __emit 0xE9
        __emit 0x73
        __emit 0x00
        __emit 0x1D
        __emit 0xE9
        __emit 0x73
        __emit 0x00
        __emit 0x2C
        __emit 0xE9
        __emit 0x73
        __emit 0x00
        __emit 0x3B
        __emit 0xE9
        __emit 0x73
        __emit 0x00
        __emit 0x4A
        __emit 0xE9
        __emit 0x73
        __emit 0x00
        __emit 0x59
        __emit 0xE9
        __emit 0x73
        __emit 0x00
        __emit 0x68
        __emit 0xE9
        __emit 0x73
        __emit 0x00
        __emit 0x77
        __emit 0xE9
        __emit 0x73
        __emit 0x00
        __emit 0x86
        __emit 0xE9
        __emit 0x73
        __emit 0x00
        __emit 0x95
        __emit 0xE9
        __emit 0x73
        __emit 0x00
        __emit 0xA4
        __emit 0xE9
        __emit 0x73
        __emit 0x00
        __emit 0xB3
        __emit 0xE9
        __emit 0x73
        __emit 0x00
        __emit 0xC2
        __emit 0xE9
        __emit 0x73
        __emit 0x00
        __emit 0xD1
        __emit 0xE9
        __emit 0x73
        __emit 0x00
        // jump-table data @ 0x0073FF5C (0 relocated pointers)
    }
}
